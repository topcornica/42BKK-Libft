/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrujipun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 22:15:08 by nrujipun          #+#    #+#             */
/*   Updated: 2022/02/19 22:39:03 by nrujipun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned char	*d;
	unsigned char	*s;
	int				i;

	d = dst;
	s = src;
	i = 0;
	if (ft_strlen(dst) > dstsize)
	{
		while (*(d + i) != 0)
		{
			*(d + dstsize + i) = *(src + i);
			i++;
		}
		return (ft_strlen(dst));
	}
	else
		return (0);
}
