/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrujipun <mavin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 14:25:35 by nrujipun          #+#    #+#             */
/*   Updated: 2022/06/04 15:19:51 by nrujipun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_cfront(const char *s1, const char *set)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (s1[i])
	{
		while (set[j])
		{
			if (s1[i] == set[j] && s1)
			{
				k++;
				break ;
			}
			j++;
		}
		if (s1[i] != set[j])
			break ;
		j = 0;
		i++;
	}
	return (k);
}

int	ft_cback(const char *s1, const char *set)
{
	int		j;
	int		sslen;
	int		stlen;

	j = 0;
	sslen = ft_strlen(s1) - 1;
	stlen = 0;
	while (s1[sslen] && sslen >= 0)
	{
		while (set[stlen] && stlen >= 0)
		{	
			if (s1[sslen] == set[stlen] && set[stlen] != 0)
			{
				j++;
				break ;
			}
			stlen++;
		}
		if (s1[sslen] != set[stlen])
			break ;
		stlen = 0;
		sslen--;
	}
	return (j);
}

void	ft_strtrimex(char *res, const char *s1, const char *set)
{
	int	i;
	int	j;
	int	k;

	i = ft_cfront(s1, set);
	j = 0;
	if (i < (int)ft_strlen(s1))
		j = ft_strlen(s1) - ft_cback(s1, set);
	k = 0;
	while (s1[i] && i < j)
	{
		res[k] = s1[i];
		k++;
		i++;
	}
	res[k] = '\0';
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*res;
	int		i;
	int		j;
	int		len;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	i = ft_cfront(s1, set);
	j = 0;
	if (i < len)
		j = ft_cback(s1, set);
	res = (char *)malloc((len - i - j + 1) * sizeof(char));
	if (!res)
		return (NULL);
	ft_strtrimex(res, s1, set);
	return (res);
}
/*
int	main(void)
{
	char *s = ft_strtrim("          ", " ");
	printf("%s\n", s);
}*/
