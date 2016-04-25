/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lede-ser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 17:06:32 by lede-ser          #+#    #+#             */
/*   Updated: 2015/12/18 17:25:21 by lede-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_itoa_base(int n, int base)
{
	int		len;
	int		isneg;
	int		i;
	char	*str;

	len = ft_nbrlen_base(n, base);
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
		str[--i] = ft_abs(n % base) +
			((ft_abs(n % base) > 10) ? 'A' - 10 : '0');
		n = n / base;
	}
	if (isneg)
		str[--i] = '-';
	return (str);
}
