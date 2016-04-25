/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lede-ser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 20:20:28 by lede-ser          #+#    #+#             */
/*   Updated: 2015/12/12 18:13:29 by lede-ser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_putnbr_fd(int n, int fd)
{
	long long int c_n;

	c_n = ((long long int)n);
	if (c_n < 0)
	{
		c_n = c_n * -1;
		ft_putchar_fd('-', fd);
	}
	if (c_n > 9)
	{
		ft_putnbr_fd(c_n / 10, fd);
		ft_putnbr_fd(c_n % 10, fd);
	}
	else
		ft_putchar_fd(c_n + 48, fd);
}
