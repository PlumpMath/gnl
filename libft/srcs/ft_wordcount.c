/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lede-ser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 15:08:35 by lede-ser          #+#    #+#             */
/*   Updated: 2015/12/12 15:21:49 by lede-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_wordcount(char const *s, char c)
{
	int nbr;
	int part;

	nbr = 0;
	part = 0;
	while (*s)
	{
		if (part == 1 && *s == c)
			part = 0;
		if (part == 0 && *s != c)
		{
			part = 1;
			nbr++;
		}
		s++;
	}
	return (nbr);
}
