/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:43:26 by jelee2            #+#    #+#             */
/*   Updated: 2023/03/15 19:04:09 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sp;
	unsigned char	uc;

	sp = (unsigned char *)s;
	uc = c;
	while (sp < (unsigned char *)s + n)
	{
		if (*sp == uc)
			return (sp);
		sp++;
	}
	return (NULL);
}
