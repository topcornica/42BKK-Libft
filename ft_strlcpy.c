/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrujipun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 22:40:50 by nrujipun          #+#    #+#             */
/*   Updated: 2022/02/19 22:54:38 by nrujipun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned char	*d;
	unsigned char	*s;
	int				i;
	int				j;

	d = dst;
	s = src;
	if (dstsize == 0)
		i = ft_strlen(d);
	else
	{
		while (*(s + j) != '\0')
		{
			*(d + i + j) = *(s + j);
			j++;
		}
	}
	return (ft_strlen(dst));
}
