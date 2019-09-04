/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-van- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 13:37:28 by kle-van-          #+#    #+#             */
/*   Updated: 2018/11/09 13:53:50 by kle-van-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	size;
	char	*new;
	int		i;

	if (!s || !f)
		return (NULL);
	size = ft_strlen(s);
	new = (char *)malloc(sizeof(char) * (size + 1));
	if (!new)
		return (NULL);
	i = 0;
	new[size] = '\0';
	while (s[i] != '\0')
	{
		new[i] = (*f)(s[i]);
		i++;
	}
	return (new);
}
