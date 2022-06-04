/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrujipun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:14:43 by nrujipun          #+#    #+#             */
/*   Updated: 2022/06/04 14:44:58 by nrujipun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	slen;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (len >= (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	if (ft_strlen(s) < start)
		len = 0;
	substr = (char *)malloc((len + 1) * sizeof(char));
	slen = ft_strlen(s);
	if (!substr)
		return (NULL);
	if (start < slen)
	{
		while (i < len)
		{
			substr[i] = s[start++];
			i++;
		}
	}
	substr[i] = '\0';
	return (substr);
}
