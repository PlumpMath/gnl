/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lede-ser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 12:26:59 by lede-ser          #+#    #+#             */
/*   Updated: 2015/12/17 16:17:12 by lede-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*c_s1;
	char	*c_s2;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	c_s1 = ((char *)s1);
	c_s2 = ((char *)s2);
	if (c_s2[0] == '\0')
		return (c_s1);
	while (s1[i] && i < n)
	{
		while (c_s1[i + j] == c_s2[j] && (i + j) < n)
		{
			j++;
			if (c_s2[j] == '\0')
				return (&c_s1[i]);
		}
		j = 0;
		i++;
	}
	return (NULL);
}
