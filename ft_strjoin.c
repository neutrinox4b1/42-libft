/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 21:13:09 by jelee2            #+#    #+#             */
/*   Updated: 2023/03/16 22:06:28 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	i;
	size_t	s1len;
	size_t	s2len;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	res = (char *)malloc((s1len + s2len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (i < s1len)
	{
		res[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < s2len)
	{
		res[s1len + i] = s2[i];
		i++;
	}
	res[s1len + s2len] = '\0';
	return (res);
}
