/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 17:27:58 by jelee2            #+#    #+#             */
/*   Updated: 2023/03/15 17:41:23 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*sp;

	sp = (unsigned char *)s + ft_strlen(s);
	while (sp >= (unsigned char *)s)
	{
		if (*sp == (unsigned char)c)
			return ((char *)sp);
		sp--;
	}
	return (NULL);
}
