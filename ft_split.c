/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrujipun <mavin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 22:47:15 by nrujipun          #+#    #+#             */
/*   Updated: 2022/06/04 14:46:29 by nrujipun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_slen(const char *s, char c)
{
	const char	*st;
	size_t		i;

	i = 0;
	while (*s == c && *s)
		s++;
	st = s;
	while (*st)
	{
		if (*st != c)
		{
			i++;
			while (*st && *st != c)
				st++;
		}
		else
			st++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	len;

	i = 0;
	if (!s)
		return (NULL);
	str = malloc(sizeof (char *) * (ft_slen(s, c) + 1));
	if (!str)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				s++;
			str[i++] = ft_substr(s - len, 0, len);
		}
		else
			s++;
	}
	str[i] = 0;
	return (str);
}
