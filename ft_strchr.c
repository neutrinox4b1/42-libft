/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:51:08 by jelee2            #+#    #+#             */
/*   Updated: 2023/03/15 17:26:15 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*sp;

	sp = (unsigned char *)s;
	while (*sp != '\0')
	{
		if (*sp == (unsigned char)c)
			return ((char *)sp);
		sp++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)sp);
	return (NULL);
}
