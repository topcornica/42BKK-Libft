/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrujipun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:56:51 by nrujipun          #+#    #+#             */
/*   Updated: 2022/06/04 00:29:34 by nrujipun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	i;

	i = ft_strlen(s1);
	if (!s1)
		return (0);
	str = (char *)malloc(i + 1);
	if (!str)
		return (0);
	ft_memcpy(str, s1, i + 1);
	return (str);
}
/*
int	main(void)
{
	char *s = ft_strdup((char *)"coucou");

	printf("%s\n", s);
	printf("%s\n", strdup("coucou"));
}*/
