/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrujipun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 15:08:32 by nrujipun          #+#    #+#             */
/*   Updated: 2022/02/23 15:49:33 by nrujipun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if ((!*str1 && !*str2) || n == 0)
		return (0);
	while (*(str1 + i) != '\0' && *(str2 + i) != '\0' && i < n)
	{
		if (*(str1 + i) != *(str2 + i))
			return (*(str1 + i) - *(str2 + i));
		i++;
	}
	if ((*(str1 + i) || *(str2 + i)) && i < n)
		return (*(str1 + i) - *(str2 + i));
	return (0);
}

/*int	main(void)
{

}*/
