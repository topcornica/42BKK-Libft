/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrujipun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:56:49 by nrujipun          #+#    #+#             */
/*   Updated: 2022/03/13 16:11:45 by nrujipun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (len < 0)
		return (0);
	else if (ft_strlen(s) < start)
	{
		substr = (char *)malloc(sizeof(char));
		substr[0] = '\0';
		return (substr);
	}
	else
	{
		substr = (char *)malloc(len * sizeof(char));
		while (*(s + start + i) != '\0' && i < len)
		{
			*(substr + i) = *(s + start + i);
			i++;
		}
		*(substr + i) = '\0';
	}
	return (substr);
}
