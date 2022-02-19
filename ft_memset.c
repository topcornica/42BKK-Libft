/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrujipun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 21:59:14 by nrujipun          #+#    #+#             */
/*   Updated: 2022/02/19 22:02:19 by nrujipun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, int n)
{
	unsigned char	*str;
	int				i;

	i = 0;
	str = ptr;
	while (i < n)
	{
		*(str + i) = x;
		i++;
	}
	return (ptr);
}
