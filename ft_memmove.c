/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrujipun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 22:10:35 by nrujipun          #+#    #+#             */
/*   Updated: 2022/02/19 22:13:12 by nrujipun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	const	char		*s;
	int				i;

	d = dst;
	s = src;
	i = 0;
	while (i < len)
	{
		*(d + i) = *(s + i);
		i++;
	}
	return (dst);
}
