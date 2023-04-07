/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 19:49:24 by jelee2            #+#    #+#             */
/*   Updated: 2023/03/24 21:32:40 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int	overflow_error(int sign)
{
	if (sign < 0)
		return ((int)LONG_MIN);
	else
		return ((int)LONG_MAX);
}

int	ft_atoi(const char *str)
{
	const char	*sp;
	int			sign;
	long		res;

	sp = str;
	sign = 1;
	res = 0;
	while ((*sp >= 0x09 && *sp <= 0x0d) || *sp == 0x20)
		sp++;
	if (*sp == '+' || *sp == '-')
	{
		if (*sp == '-')
			sign *= -1;
		sp++;
	}
	while (*sp >= '0' && *sp <= '9')
	{
		if (res > (LONG_MAX / 10)
			|| (res == (LONG_MAX / 10) && (*sp - '0') > (LONG_MAX % 10)))
			return (overflow_error(sign));
		res = res * 10 + (*sp - '0');
		sp++;
	}
	return ((int)res * sign);
}
