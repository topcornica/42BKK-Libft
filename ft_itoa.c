/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrujipun <mavin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 22:17:40 by nrujipun          #+#    #+#             */
/*   Updated: 2022/03/16 23:21:42 by nrujipun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_char(int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n > 0)
	{
		if (n % 10 >= 0 || n % 10 <= 9)
			i++;
		n = n / 10;
	}
	return (i);
}

/*char	*reverse_str(char *s)
{
	char	*sub_s;
	size_t		i;
	size_t		j;

	i = ft_strlen(s);
	j = 0;
	sub_s = (char *)malloc(i * sizeof(char));
	if (s[0] == '-')
	{
		sub_s[0] = '-';
		j++;
	}
	while (*(s + j) != 0 && j < i)
	{
		*(sub_s + j) = *(s + i);
		j++;
		i--;
	}
	return (sub_s);
}*/

char	*ft_itoa(int n)
{
	char	*sub;
	int		c;
	int		f;

	c = 0;
	f = count_char(n);
	sub = (char *)malloc(f * sizeof(char));
	if (n < 0)
	{
		sub[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		if (f > 0)
		{
			c = n % 10;
			*(sub + f - 1) = c + '0';
			n = n / 10;
			f--;
		}
	}
	return (sub);
}
