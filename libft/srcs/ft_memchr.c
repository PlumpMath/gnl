/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lede-ser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 12:01:45 by lede-ser          #+#    #+#             */
/*   Updated: 2015/12/17 16:02:52 by lede-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*c_s;
	unsigned char	c_c;
	size_t			i;

	c_s = ((unsigned char *)s);
	c_c = ((unsigned char)c);
	i = 0;
	while (i < n)
	{
		if (c_s[i] == c_c)
			return (&c_s[i]);
		i++;
	}
	return (NULL);
}
