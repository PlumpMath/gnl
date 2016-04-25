/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lede-ser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 13:18:30 by lede-ser          #+#    #+#             */
/*   Updated: 2015/12/17 16:13:58 by lede-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrchr(const char *s, int c)
{
	char	c_c;
	int		end;

	c_c = ((char)c);
	end = ft_strlen(s);
	while (end >= 0)
	{
		if (s[end] == c_c)
			return ((char *)&s[end]);
		end--;
	}
	return (NULL);
}
