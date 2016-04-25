/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lede-ser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 19:56:11 by lede-ser          #+#    #+#             */
/*   Updated: 2015/12/12 19:25:39 by lede-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnew(size_t size)
{
	char			*str;
	long long int	j;

	j = size;
	str = (char *)malloc(sizeof(*str) * (j + 1));
	if (!str)
		return (NULL);
	ft_bzero(str, j + 1);
	return (str);
}
