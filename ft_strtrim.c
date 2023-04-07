/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 22:08:50 by jelee2            #+#    #+#             */
/*   Updated: 2023/03/17 17:05:35 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	in_set(char c, char const *set)
{
	char	*sp;

	sp = (char *)set;
	while (*sp != '\0')
	{
		if (*sp == c)
			return (1);
		sp++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		st_idx;
	int		ed_idx;
	char	*res;

	st_idx = 0;
	while (in_set(s1[st_idx], set))
		st_idx++;
	ed_idx = ft_strlen(s1) - 1;
	while (ed_idx >= 0 && in_set(s1[ed_idx], set))
		ed_idx--;
	if (ed_idx < st_idx)
		res = (char *)malloc(1 * sizeof(char));
	else
		res = (char *)malloc((ed_idx - st_idx + 2) * sizeof(char));
	if (!res)
		return (NULL);
	if (ed_idx >= st_idx)
		ft_memcpy(res, &s1[st_idx], ed_idx - st_idx + 1);
	if (ed_idx < st_idx)
		*res = '\0';
	else
		res[ed_idx - st_idx + 1] = '\0';
	return (res);
}
