/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lede-ser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 14:31:47 by lede-ser          #+#    #+#             */
/*   Updated: 2015/12/17 16:07:29 by lede-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = ((char *)s);
	while (ptr[i] != c && ptr[i])
		i++;
	if (ptr[i] == c)
		return (&ptr[i]);
	else
		return (NULL);
}
