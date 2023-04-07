/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 16:11:39 by jelee2            #+#    #+#             */
/*   Updated: 2023/03/21 16:14:01 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	char	*sp;

	sp = s;
	while (*sp != '\0')
	{
		ft_putchar_fd(*sp, fd);
		sp++;
	}
	return ;
}
