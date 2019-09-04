/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 12:01:48 by kle-van-          #+#    #+#             */
/*   Updated: 2019/02/18 10:32:40 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t cpt;

	if (!str)
		return (0);
	cpt = 0;
	while (str[cpt] != '\0')
		cpt++;
	return (cpt);
}
