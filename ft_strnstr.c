/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrujipun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 20:42:51 by nrujipun          #+#    #+#             */
/*   Updated: 2022/03/01 09:48:14 by nrujipun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	if (!*needle)
		return ((char *)haystack);
	while (*(haystack + j) != '\0' && j < len)	
	{
		k = j;
		while (*(needle + i) == *(haystack + j))
		{
			while ((*(needle + i) == *(haystack + j))
					&& ((needle[i++] != 0 
						&& haystack[j++] != 0)
						&& j < len))
				continue;
			if (needle[i] == 0)
				return ((char *)&haystack[j]);
		}
		i = 0;
		j = k + 1;
		j++;
	}
	return (0);
}
