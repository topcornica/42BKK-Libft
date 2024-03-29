/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrujipun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 22:40:50 by nrujipun          #+#    #+#             */
/*   Updated: 2022/02/22 21:55:09 by nrujipun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (*(src + i) != '\0')
		i++;
	if (i + 1 < dstsize)
		ft_memcpy(dst, src, i + 1);
	else if (dstsize != 0)
	{
		ft_memcpy(dst, src, dstsize -1);
		dst[dstsize - 1] = '\0';
	}
	return (i);
}
