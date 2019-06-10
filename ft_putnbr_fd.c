/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 13:13:13 by mdube             #+#    #+#             */
/*   Updated: 2019/06/10 17:13:06 by mdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	if (n)
	{
		if (n == -2147483648)
		{
			ft_putstr_fd("-2147483648", fd);
		}
		if (0 > n)
		{
			ft_putchar_fd('-', fd);
			ft_putnbr_fd(-(n), fd);
		}
		if (10 <= n)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putchar_fd(n % 10 + '0', fd);
		}
		else
			ft_putchar_fd(n + '0', fd);
	}
}
