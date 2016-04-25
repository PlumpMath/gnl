/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lede-ser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 14:58:13 by lede-ser          #+#    #+#             */
/*   Updated: 2015/12/17 16:15:56 by lede-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		j;
	int		word_nb;

	word_nb = ft_wordcount(s, c);
	tab = (char **)malloc(sizeof(*tab) * (word_nb + 1));
	if (!tab || !s)
		return (NULL);
	j = 0;
	while (word_nb > 0)
	{
		while (*s == c && *s != '\0')
			s++;
		tab[j] = ft_strsub(s, 0, ft_wordlen(s, c));
		if (!tab[j])
			return (NULL);
		s = s + ft_wordlen(s, c);
		word_nb--;
		j++;
	}
	tab[j] = NULL;
	return (tab);
}
