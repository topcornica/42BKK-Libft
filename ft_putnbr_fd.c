/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrujipun <mavin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:21:38 by nrujipun          #+#    #+#             */
/*   Updated: 2022/05/26 19:33:24 by nrujipun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	i;

	i = n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		i = -n;
	}
	if (i > 9)
	{
		ft_putnbr_fd((i / 10), fd);
		ft_putchar_fd((i % 10) + '0', fd);
	}
	else
		ft_putchar_fd(i + '0', fd);
}
