/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:43:37 by jelee2            #+#    #+#             */
/*   Updated: 2023/03/21 15:55:14 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_digits(int n)
{
	size_t	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*res;
	size_t		len;
	long long	abs;
	size_t		i;

	len = get_digits(n);
	res = (char *)malloc((len + 1) * sizeof(char));
	abs = n;
	if (!res)
		return (NULL);
	if (n < 0)
	{
		res[0] = '-';
		abs *= -1;
	}
	res[len] = '\0';
	i = len - 1;
	res[i--] = '0' + (abs % 10);
	abs /= 10;
	while (abs)
	{
		res[i--] = '0' + (abs % 10);
		abs /= 10;
	}
	return (res);
}
