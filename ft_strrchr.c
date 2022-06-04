/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrujipun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:44:33 by nrujipun          #+#    #+#             */
/*   Updated: 2022/06/04 14:44:27 by nrujipun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	char	*str;

	ch = c;
	str = (char *)0;
	while (*s)
	{
		if (*s == ch)
		{
			str = (char *)s;
		}
		s++;
	}
	if (ch == 0)
		str = (char *)s;
	return (str);
}
/*
int	main(void)
{
	char s[] = "tripouille";

	printf("%s\n", strrchr(s, 't' + 256));
	printf("%s", ft_strrchr(s, 't' + 256));
}*/
