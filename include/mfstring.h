/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mfstring.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 19:27:14 by mfischer          #+#    #+#             */
/*   Updated: 2019/04/07 01:02:01 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MFSTRING_H
# define MFSTRING_H

# include <unistd.h>
# include <stdlib.h>

char	*mf_itoa(int num);
void	mf_itoa_s(int num, char *res);

#endif
