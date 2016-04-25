/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lede-ser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 16:28:55 by lede-ser          #+#    #+#             */
/*   Updated: 2015/12/17 16:07:05 by lede-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*c_b;
	unsigned char	c_c;

	i = 0;
	c_b = ((unsigned char *)b);
	c_c = ((unsigned char)c);
	while (i < len)
	{
		c_b[i] = c_c;
		i++;
	}
	return (c_b);
}
