/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrujipun <mavin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 14:25:35 by nrujipun          #+#    #+#             */
/*   Updated: 2022/06/02 20:53:13 by nrujipun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_cnonp(const char *s)
{
	size_t	i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 0 && *(s + i) <= 32)
			i++;
		else
			return (i);
	}
	return (i);
}

static size_t	ft_ccutstr(const char *s, const char *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	
	i = 0;
	j = 0;
	k = 0;
	while (*(s + i) != '\0')
	{
		while (*(set + j) != '\0')
		{
			if (s[i] == set[j])
			{
				j++;
				k++;
				break;
			}
			else
				break;
		}
		j = 0;
		i++;
	}
	return (k);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	unsigned char	*res;
	size_t	i;
	size_t	j;
	size_t	sum;

	if (!s1)
		return (NULL);
	i = ft_cnonp(s1) + ft_ccutstr(s1, set);
	j = 0;
	sum = ft_strlen(s1) - i + 1;
	res = (unsigned char *)malloc(sum * sizeof(char));
	if (!res)
		return (NULL);
	while (*(s1 + i + j) != 0)
	{
		res[j] = s1[i + j];
		j++;
	}
	*(res + j) = '\0';
	return ((char *)res);
}
/*
int	main(void)
{
	char * s = ft_strtrim("tripouille   xxxx", " x");
	printf("%s\n", s);
}*/
