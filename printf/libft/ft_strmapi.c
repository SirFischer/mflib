/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-van- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 13:54:06 by kle-van-          #+#    #+#             */
/*   Updated: 2018/11/09 14:02:36 by kle-van-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	size;
	char	*new;
	int		i;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	new = (char *)malloc(sizeof(char) * (size + 1));
	if (!new)
		return (NULL);
	i = 0;
	new[size] = '\0';
	while (s[i] != '\0')
	{
		new[i] = (*f)(i, s[i]);
		i++;
	}
	return (new);
}
