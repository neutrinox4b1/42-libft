/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 20:24:09 by jelee2            #+#    #+#             */
/*   Updated: 2023/03/16 20:35:51 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*res;
	char	*rp;
	char	*sp;

	res = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	rp = res;
	sp = (char *)s1;
	while (*sp != '\0')
	{
		*rp = *sp;
		rp++;
		sp++;
	}
	*rp = *sp;
	return (res);
}
