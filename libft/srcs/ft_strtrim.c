/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lede-ser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/10 17:25:21 by lede-ser          #+#    #+#             */
/*   Updated: 2015/12/17 16:18:42 by lede-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		j;
	int		ind;

	i = 0;
	j = ft_strlen(s);
	ind = 0;
	if (s == NULL)
		return (NULL);
	while ((s[j - 1] != '\0') && j >= 0 && (s[j - 1] == ' '
			|| s[j - 1] == '\n' || s[j - 1] == '\t'))
		j--;
	while ((s[i] != '\0') && i < j && (s[i] == ' '
			|| s[i] == '\n' || s[i] == '\t'))
		i++;
	str = (char *)malloc(sizeof(*str) * (j - i + 1));
	if (!str)
		return (NULL);
	while (i < j)
		str[ind++] = s[i++];
	str[ind] = '\0';
	return (str);
}
