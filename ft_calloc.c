/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrujipun <mavin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:44:46 by nrujipun          #+#    #+#             */
/*   Updated: 2022/05/26 22:05:31 by nrujipun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*s;
	size_t	val;

	if ((count * size) < size)
		return (NULL);
	val = count * size;
	s = malloc(val);
	if (!s)
		return (NULL);
	ft_bzero(s, val);
	return (s);
}
