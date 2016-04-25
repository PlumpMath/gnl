/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lede-ser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/17 16:52:46 by lede-ser          #+#    #+#             */
/*   Updated: 2015/12/17 19:27:08 by lede-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;

	if (alst == NULL || *alst == NULL)
		return ;
	tmp = *alst;
	*alst = tmp->next;
	(*del)(tmp->content, tmp->content_size);
	tmp = NULL;
}
