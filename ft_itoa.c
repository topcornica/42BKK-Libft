/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrujipun <mavin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 22:17:40 by nrujipun          #+#    #+#             */
/*   Updated: 2022/05/28 18:54:30 by nrujipun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_char(int n)
{
	int	i;

	i = 0;
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

static int	ft_negative(int n)
{
	if (n < 0)
		return (1);
	else
		return (0);
}

char	*ft_itoa(int n)
{
	int	neg;
	char	*sub;
	int	f;
	int	c;

	neg = ft_negative(n);
	c = n;
	f = count_char(n);
	sub = (char *)malloc((f + 1) * sizeof(char));
	sub[f] = '\0';
	if (n < 0)
		n = n * -1;
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
	if (neg == 1)
		sub[0] = '-';
	return (sub);
}
