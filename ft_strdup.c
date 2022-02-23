/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrujipun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:56:51 by nrujipun          #+#    #+#             */
/*   Updated: 2022/02/23 20:39:19 by nrujipun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;
	size_t	j;

	i = ft_strlen(s1);
	j = 0;
	str = (char *)malloc(i);
	while (*(s1 + j) != '\0')
	{
		*(str + j) = *(s1 + j);
		j++;
	}
	*(str + i) = '\0';
	return (str);
}
/*
int	main(void)
{
	char *s = ft_strdup((char *)"coucou");

	printf("%s\n", s);
	printf("%s\n", strdup("coucou"));
}*/
