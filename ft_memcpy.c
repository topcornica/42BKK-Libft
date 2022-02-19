/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrujipun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 22:08:24 by nrujipun          #+#    #+#             */
/*   Updated: 2022/02/19 22:10:14 by nrujipun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void *src, int n)
{
	unsigned char	*d;
	unsigned char	*s;
	int				i;

	d = dst;
	s = src;
	while (i < n)
	{
		*(d + i) = *(s + i);
		i++;
	}
	return (dst);
}
