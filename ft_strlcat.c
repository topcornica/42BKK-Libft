/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrujipun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 22:15:08 by nrujipun          #+#    #+#             */
/*   Updated: 2022/06/04 11:18:45 by nrujipun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	f_strnlen(const char *str, size_t max)
{
	size_t	i;

	i = 0;
	while (i < max)
	{
		if (str[i] == '\0')
			break ;
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	i = 0;
	dlen = f_strnlen(dst, dstsize);
	slen = ft_strlen(src);
	if (dstsize == dlen)
		return (slen + dstsize);
	if ((dstsize - dlen) > slen)
		ft_memcpy(dst + dlen, src, slen + 1);
	else
	{
		ft_memcpy(dst + dlen, src, dstsize - dlen - 1);
		dst[dstsize - 1] = 0;
	}
	return (slen + dlen);
}
/*
int	main(void)
{
	char src1[] = "coucou";
	char dest1[10];
	char src2[] = "coucou";
	char dest2[10];
	memset(dest1, 'A', 10);
	memset(dest2, 'A', 10);
	
	printf("%lu\n", strlcat(dest1, src1, 1));
	printf("%s\n", dest1);
	
	printf("%zu\n", ft_strlcat(dest2, src2, 1));
	printf("%s\n", dest2);
}*/
