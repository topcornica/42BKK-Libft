/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrujipun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 19:37:21 by nrujipun          #+#    #+#             */
/*   Updated: 2022/02/25 14:38:29 by nrujipun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcat(unsigned char *dst, const char *src)
{
	unsigned char	*d;
	size_t	i;
	size_t	j;

	d = dst;
	i = 0;
	j = 0;
	if (ft_strlen((const char *)dst) > 0)
		j = ft_strlen((const char *)dst);
	while (*(src + i) != '\0')
	{
		*(dst + i + j) = *(src + i);
		i++;
	}
	return ((char *)dst);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	unsigned char	*ret;
	size_t	sum;

	sum = ft_strlen(s1) + ft_strlen(s2);
	ret = (unsigned char *)malloc(sum * sizeof(unsigned char *));
	ft_strcat(ret, s1);
	ft_strcat(ret, s2);
	*(ret + ft_strlen(s1) + ft_strlen(s2)) = '\0';
	return ((char *)ret);
}
/*
int	main(void)
{
	char * s = ft_strjoin("tripouille", "42");
	printf("%s\n", s);
}*/