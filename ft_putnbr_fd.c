/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:18:04 by jelee2            #+#    #+#             */
/*   Updated: 2023/03/21 16:36:32 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	print_nbr_fd(int n, int fd)
{
	char	pchr;

	if (n == 0)
		return ;
	print_nbr_fd(n / 10, fd);
	pchr = n % 10 + '0';
	ft_putchar_fd(pchr, fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	else if (n == 0)
		ft_putchar_fd('0', fd);
	print_nbr_fd(n, fd);
}
