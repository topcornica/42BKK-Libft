/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrujipun <mavin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:56:49 by nrujipun          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/05/26 22:26:03 by nrujipun         ###   ########.fr       */
=======
/*   Updated: 2022/03/13 16:11:45 by nrujipun         ###   ########.fr       */
>>>>>>> dfc9f65118da685f23e7a1c2eecede2bd1373465
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
<<<<<<< HEAD
	if (ft_strlen(s) < start)
	{
		substr = malloc(sizeof(char));
		substr[0] = '\0';
		return(substr);
	}
	substr = (char *)malloc((ft_strlen(s) - start) * sizeof(char));
	while (*(s + start + i) != '\0' && i < len)
=======
	else if (ft_strlen(s) < start)
	{
		substr = (char *)malloc(sizeof(char));
		substr[0] = '\0';
		return (substr);
	}
	else
>>>>>>> dfc9f65118da685f23e7a1c2eecede2bd1373465
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
