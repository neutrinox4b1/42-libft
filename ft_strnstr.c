/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 19:17:21 by jelee2            #+#    #+#             */
/*   Updated: 2023/03/16 19:56:27 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	hlen;
	size_t	nlen;
	size_t	i;

	hlen = ft_strlen(haystack);
	if (hlen > len)
		hlen = len;
	nlen = ft_strlen(needle);
	if (!nlen)
		return ((char *)haystack);
	if (nlen > hlen)
		return (NULL);
	i = 0;
	while (i < hlen - nlen + 1)
	{
		if (!ft_strncmp(&haystack[i], needle, nlen))
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
