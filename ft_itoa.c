/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrujipun <mavin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 22:17:40 by nrujipun          #+#    #+#             */
/*   Updated: 2022/06/01 19:33:13 by nrujipun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_char(int n)
{
	int	i;

	i = 0;
	if (n > 10 || n < -10)
	{
		i++;
		n = n / 10;
	}
	if (n < 0)
	{
		n = -n;
		i++;
	}
	while (n > 9)
	{
		i++;
		n = n / 10;
	}
	i++;
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

	neg = ft_negative(n);
	f = count_char(n);
	sub = (char *)malloc((f + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	sub[f] = '\0';
	while (f > 0)
	{
		if (n < 0)
			sub[--f] = ((n % 10) * (-1)) + '0';
		else
			sub[--f] = (n % 10) + '0';
		n = n / 10;
	}
	if (neg == 1)
		sub[0] = '-';
	return (sub);
}
