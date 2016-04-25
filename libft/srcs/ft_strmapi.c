/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lede-ser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 15:54:41 by lede-ser          #+#    #+#             */
/*   Updated: 2015/12/17 16:13:09 by lede-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*tmp_s;

	i = 0;
	tmp_s = ft_strnew(ft_strlen(s));
	if (!tmp_s)
		return (NULL);
	while (s[i])
	{
		tmp_s[i] = f(i, s[i]);
		i++;
	}
	return (tmp_s);
}
