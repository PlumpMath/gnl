/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lede-ser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 19:39:37 by lede-ser          #+#    #+#             */
/*   Updated: 2015/12/12 17:22:19 by lede-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memalloc(size_t size)
{
	void *str;

	str = (void *)malloc(sizeof(str) * size);
	if (!str)
		return (NULL);
	ft_memset(str, 0, size);
	return (str);
}
