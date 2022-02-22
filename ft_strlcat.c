/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrujipun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 22:15:08 by nrujipun          #+#    #+#             */
/*   Updated: 2022/02/22 23:30:48 by nrujipun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;
	size_t	sum;

	i = 0;
	sum = 0;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (dstsize == 0)
		return (slen);
	if (dstsize < dlen)
		sum = slen + dstsize;
	else
		sum = slen + dlen;
	while ((dlen + i) < dstsize - 1 && *(src + i) != '\0')
	{
		*(dst + dlen + i) = *(src + i);
		i++;
	}
	dst[dlen + i] = 0;
	return (sum);
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
