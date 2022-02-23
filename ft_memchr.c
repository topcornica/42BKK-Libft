/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrujipun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:15:45 by nrujipun          #+#    #+#             */
/*   Updated: 2022/02/23 16:30:27 by nrujipun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t	i;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (*(str + i) == (unsigned char)c)
			return ((void *)&*(s + i));
		i++;
	}
	return (0);
}
