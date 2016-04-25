/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lede-ser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 13:14:39 by lede-ser          #+#    #+#             */
/*   Updated: 2015/12/08 18:24:10 by lede-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*c_s1;
	unsigned char	*c_s2;
	size_t			i;

	i = 0;
	c_s1 = ((unsigned char *)s1);
	c_s2 = ((unsigned char *)s2);
	if ((c_s1[i] == '\0' && c_s2[i] == '\0') || n == 0)
		return (0);
	while (i < n - 1 && c_s1[i] == c_s2[i])
		i++;
	return (c_s1[i] - c_s2[i]);
}
