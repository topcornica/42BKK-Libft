/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrujipun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 12:39:37 by nrujipun          #+#    #+#             */
/*   Updated: 2022/06/02 12:46:47 by nrujipun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*s1;
	t_list	*s2;

	s1 = 0;
	while (lst)
	{
		s2 = ft_lstnew(f(lst->content));
		if (!s2)
		{
			ft_lstclear(&s1, del);
			return (0);
		}
		ft_lstadd_back(&s1, s2);
		lst = lst->next;
	}
	free(lst);
	return (s1);
}
