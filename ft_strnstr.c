/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrujipun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 20:42:51 by nrujipun          #+#    #+#             */
/*   Updated: 2022/02/24 15:49:28 by nrujipun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (*(haystack + i) != '\0' && *(needle + i) != '\0' && i < len)
	{
		if (*(needle + i) == *(haystack + i))
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char haystack[30] = "aaabcabcd";
	//char needle[10] = "aabc";
	//char * empty = (char*)"";

	printf("%s\n", ft_strnstr(haystack, "c", -1));
	printf("%s\n", strnstr(haystack, "c", -1));
	printf("%s\n", haystack + 4);
}*/
