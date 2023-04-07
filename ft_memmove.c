/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:13:14 by jelee2            #+#    #+#             */
/*   Updated: 2023/03/16 21:49:00 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{	
	size_t		i;
	char		*dp;
	const char	*sp;

	if (dst <= src)
		return (ft_memcpy(dst, src, len));
	else
	{
		i = len;
		dp = (char *)dst;
		sp = (const char *)src;
		while (i > 0)
		{
			dp[i - 1] = sp[i - 1];
			i--;
		}
		return (dst);
	}
}
