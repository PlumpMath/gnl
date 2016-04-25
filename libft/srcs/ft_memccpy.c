/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lede-ser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 09:51:04 by lede-ser          #+#    #+#             */
/*   Updated: 2015/12/12 19:10:33 by lede-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*c_dst;
	unsigned char	*c_src;

	c_dst = ((unsigned char *)dst);
	c_src = ((unsigned char *)src);
	i = 0;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		c_dst[i] = c_src[i];
		if (c_src[i] == (unsigned char)c)
			return (&c_dst[i + 1]);
		i++;
	}
	return (NULL);
}
