/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lede-ser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:14:43 by lede-ser          #+#    #+#             */
/*   Updated: 2015/12/08 20:52:22 by lede-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_putnbr(int n)
{
	long long int c_n;

	c_n = ((long long int)n);
	if (c_n < 0)
	{
		c_n = c_n * -1;
		ft_putchar('-');
	}
	if (c_n > 9)
	{
		ft_putnbr(c_n / 10);
		ft_putnbr(c_n % 10);
	}
	else
		ft_putchar(c_n + 48);
}
