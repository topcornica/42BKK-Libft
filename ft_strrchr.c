/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrujipun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 13:44:33 by nrujipun          #+#    #+#             */
/*   Updated: 2022/02/24 15:24:29 by nrujipun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			len_s;
	size_t		i;
	char		a;

	a = (char)c;
	len_s = (int)ft_strlen(s);
	i = 0;
	if (!*s && c)
		return (0);
	if (a == '\0' || !*s)
		return ((char *)s + len_s);
	while (*(s + len_s) != a && len_s >= 0)
	{
		len_s--;
		i++;
	}
	if (s[0] != c && len_s < 0)
		return (0);
	return ((char *)s + len_s);
}
/*
int	main(void)
{
	char s[] = "tripouille";

	printf("%s\n", strrchr(s, 't' + 256));
	printf("%s", ft_strrchr(s, 't' + 256));
}*/
