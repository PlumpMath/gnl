/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lede-ser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 15:51:09 by lede-ser          #+#    #+#             */
/*   Updated: 2015/12/12 20:11:56 by lede-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*tmp_s;

	i = 0;
	tmp_s = ft_strnew(ft_strlen(s));
	if (!tmp_s)
		return (NULL);
	while (s[i])
	{
		tmp_s[i] = f(s[i]);
		i++;
	}
	return (tmp_s);
}
