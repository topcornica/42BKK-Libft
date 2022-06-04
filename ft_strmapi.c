/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrujipun <mavin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 19:34:09 by nrujipun          #+#    #+#             */
/*   Updated: 2022/06/04 11:01:34 by nrujipun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*ret;

	i = 0;
	if (s == 0 || f == 0)
		return (0);
	ret = ft_strdup(s);
	if (ret == 0)
		return (0);
	while (ret[i] != 0)
	{
		ret[i] = f(i, ret[i]);
		i++;
	}
	return (ret);
}
