/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrujipun <mavin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 19:37:21 by nrujipun          #+#    #+#             */
/*   Updated: 2022/06/04 14:45:53 by nrujipun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_join(const char *src1, const char *src2)
{
	size_t	i;
	size_t	j;
	size_t	sum;
	char	*res;

	i = 0;
	j = 0;
	sum = ft_strlen(src1) + ft_strlen(src2) + 1;
	res = (char *)malloc(sum * sizeof(char));
	if (!res)
		return (NULL);
	while (*(src1 + i) != '\0')
	{
		*(res + i) = *(src1 + i);
		i++;
	}
	while (*(src2 + j) != '\0')
	{
		*(res + i + j) = *(src2 + j);
		j++;
	}
	*(res + i + j) = '\0';
	return (res);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	if (s1 == NULL)
		return (ft_strdup(s2));
	else if (s2 == NULL)
		return (ft_strdup(s1));
	else
		return (ft_join(s1, s2));
}
/*
int	main(void)
{
	char * s = ft_strjoin("", "42");
	printf("%s\n", s);
	printf("%i\n", strcmp(s, "42"));
}*/
