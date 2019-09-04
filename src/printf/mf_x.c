/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mf_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 15:05:27 by kle-van-          #+#    #+#             */
/*   Updated: 2019/09/04 23:47:52 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfprintf.h"

static int	mf_plen(unsigned long long p0)
{
	int i;

	i = 0;
	if (p0 == 0)
		return (1);
	while (p0 > 0)
	{
		i++;
		p0 /= 16;
	}
	return (i);
}

static char	*mf_get_address(unsigned long long address, t_params *param)
{
	char	*res;
	int		i;
	char	c;

	param->size = address;
	i = ((param->flags & PRECISION) == PRECISION
	&& (int)param->prec > mf_plen(address)) ? (int)param->prec : mf_plen(address);
	i += ((param->flags & ALTERNATE) == ALTERNATE && address > 0) ? 2 : 0;
	i = ((param->flags & PRECISION) != PRECISION
	&& (param->flags & WIDTH) == WIDTH
	&& (param->flags & ZPAD) == ZPAD && (param->flags & RPAD) != RPAD
	&& (int)param->width > i) ? (int)param->width : i;
	if (!(res = mf_strnew(i)))
		return (NULL);
	res[0] = (address == 0) ? '0' : res[0];
	while (address != 0)
	{
		c = address % 16;
		address /= (unsigned long long)16;
		res[--i] = (c < 10) ? c + '0' : c - 10 + 'a';
	}
	while (--i != -1)
		res[i] = (i == 1 && (param->flags & ALTERNATE) ==
		ALTERNATE && param->size) ? 'x' : '0';
	return (res);
}

char		*mf_x_func(va_list *ap, t_params *p)
{
	unsigned long long	p0;
	char				*addr;
	char				*res;
	int					i;

	p0 = mf_get_ouxxb(ap, p);
	if (!(addr = mf_get_address(p0, p)))
		return (NULL);
	*addr = (!p0 && (p->flags & PRECISION) && p->prec == 0) ? '\0' : *addr;
	p->size = ((p->flags & WIDTH) == WIDTH) && p->width >
	mf_strlen(addr) ? p->width : mf_strlen(addr);
	if (!(res = mf_strnew(p->size)))
		free(addr);
	if (!res)
		return (NULL);
	i = -1;
	while (++i < (int)p->size)
		res[i] = ' ';
	mf_strncpy((p->flags & RPAD) ? res :
	res + (p->size - mf_strlen(addr)), addr, mf_strlen(addr));
	free(addr);
	if (p->type == X)
		mf_strtoupper(res);
	p->size = mf_strlen(res);
	return (res);
}
