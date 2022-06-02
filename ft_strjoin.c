/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrujipun <mavin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 19:37:21 by nrujipun          #+#    #+#             */
/*   Updated: 2022/06/02 14:25:42 by nrujipun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcat(char *dst, const char *src)
{
	size_t	i;
	size_t	j;

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
	char	*ret;
	size_t	sum;
	
	if (s1 == NULL)
		ret = ft_strdup(s2);
	if (s2 == NULL)
		ret = ft_strdup(s1);
	sum = ft_strlen(s1) + ft_strlen(s2) + 1;
	ret = (char *)malloc(sum * sizeof(char));
	if (!ret)
		return (NULL);
	ft_strcat(ret, s1);
	ft_strcat(ret, s2);
	*(ret + (sum - 1))  = '\0';
	return ((char *)ret);
}
/*
int	main(void)
{
	char * s = ft_strjoin("", "42");
	printf("%s\n", s);
	printf("%i\n", strcmp(s, "42"));
}*/
