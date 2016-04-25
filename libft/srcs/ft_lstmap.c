/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lede-ser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 17:43:59 by lede-ser          #+#    #+#             */
/*   Updated: 2015/12/18 16:45:03 by lede-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *nlst;
	t_list *f_elem;
	t_list *basic_elem;

	nlst = NULL;
	if (lst && (*f))
	{
		nlst = f(lst);
		basic_elem = nlst;
		lst = lst->next;
		while (lst)
		{
			f_elem = f(lst);
			basic_elem->next = f_elem;
			basic_elem = f_elem;
			lst = lst->next;
		}
		basic_elem->next = NULL;
	}
	return (nlst);
}
