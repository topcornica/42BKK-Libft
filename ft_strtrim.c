/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrujipun <mavin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 14:25:35 by nrujipun          #+#    #+#             */
/*   Updated: 2022/03/18 21:17:28 by nrujipun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_cutstr(const char *s)
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

char	*ft_strtrim(const char *s1, const char *set)
{
	unsigned char	*res;
	size_t	i;
	size_t	j;

	i = ft_cutstr(s1);
	j = 0;
	res = (unsigned char *)malloc(ft_strlen(s1) * sizeof(unsigned char *));
	while (*(s1 + i) != 0)
	{
		while (*(set + j) != 0)
		{
			if (*(s1 + i) != *(set + j))
			{
				*(res + j) = *(s1 + i);
				j++;
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	*(res + j) = '\0';
	return ((char *)res);
}
/*
int	main(void)
{
	char * s = ft_strtrim("   xxxtripouille", " x");
	printf("%s\n", s);
*/
