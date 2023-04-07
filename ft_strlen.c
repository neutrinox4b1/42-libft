/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:44:18 by jelee2            #+#    #+#             */
/*   Updated: 2023/03/14 21:37:47 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t		len;
	const char	*sp;

	len = 0;
	sp = (const char *)s;
	while (*sp != '\0')
	{
		len++;
		sp++;
	}
	return (len);
}
