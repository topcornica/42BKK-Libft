/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrujipun <mavin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:56:49 by nrujipun          #+#    #+#             */
/*   Updated: 2022/05/26 22:26:03 by nrujipun         ###   ########.fr       */
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
	if (ft_strlen(s) < start)
	{
		substr = malloc(sizeof(char));
		substr[0] = '\0';
		return(substr);
	}
	substr = (char *)malloc((ft_strlen(s) - start) * sizeof(char));
	while (*(s + start + i) != '\0' && i < len)
	{
		*(substr + i) = *(s + start + i);
		i++;
	}
	*(substr + i) = '\0';
	return (substr);
}
