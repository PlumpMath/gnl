/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lede-ser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 16:58:18 by lede-ser          #+#    #+#             */
/*   Updated: 2015/12/17 19:12:15 by lede-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;
	t_list *nextlist;

	tmp = *alst;
	while (tmp)
	{
		nextlist = tmp->next;
		(*del)(tmp->content, tmp->content_size);
		free(tmp);
		tmp = nextlist;
	}
	*alst = NULL;
}
