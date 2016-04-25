/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lede-ser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 14:41:09 by lede-ser          #+#    #+#             */
/*   Updated: 2015/12/17 16:15:29 by lede-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	char	*c_s1;
	char	*c_s2;
	int		i;
	int		j;

	i = 0;
	j = 0;
	c_s1 = ((char *)s1);
	c_s2 = ((char *)s2);
	if (c_s2[0] == '\0')
		return (c_s1);
	while (c_s1[i])
	{
		while (c_s1[i + j] == c_s2[j])
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
