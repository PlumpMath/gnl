/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lede-ser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/12 15:50:08 by lede-ser          #+#    #+#             */
/*   Updated: 2015/12/17 16:05:08 by lede-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_itoa(int n)
{
	int		len;
	int		isneg;
	int		i;
	char	*str;

	len = ft_nbrlen(n);
	isneg = ft_isneg(n);
	str = (char *)malloc(sizeof(*str) * (len + isneg + 1));
	if (!str)
		return (NULL);
	i = len + isneg;
	str[i] = '\0';
	if (!n)
		str[--i] = '0';
	while (n != 0)
	{
		str[--i] = ft_abs(n % 10) + '0';
		n = n / 10;
	}
	if (isneg)
		str[--i] = '-';
	return (str);
}
