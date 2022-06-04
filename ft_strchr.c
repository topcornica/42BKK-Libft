/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrujipun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 00:02:12 by nrujipun          #+#    #+#             */
/*   Updated: 2022/06/04 14:44:12 by nrujipun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	a;

	i = 0;
	a = c;
	if (a == '\0')
		return ((char *)(s + ft_strlen(s)));
	while (*(s + i) != a && *(s + i) != '\0')
		i++;
	if (i == ft_strlen(s))
		return (0);
	return ((char *)(s + i));
}
/*
int	main(void)
{
	char	s[] = "Tripouille";

	printf("%s\n", strchr(s, 0));
	printf("%s", ft_strchr(s, 0));
}*/
