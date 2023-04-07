/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:06:35 by jelee2            #+#    #+#             */
/*   Updated: 2023/03/20 17:41:19 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	my_strlen(char *s, char c)
{
	char	*sp;
	size_t	len;

	sp = s;
	len = 0;
	while (*sp != '\0' && *sp != c)
	{
		len++;
		sp++;
	}
	return (len);
}

static char	*my_strdup(char *s, char c)
{
	char	*res;
	char	*rp;
	char	*sp;

	res = (char *)malloc((my_strlen(s, c) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	rp = res;
	sp = s;
	while (*sp != '\0' && *sp != c)
	{
		*rp = *sp;
		rp++;
		sp++;
	}
	*rp = '\0';
	return (res);
}

static size_t	my_wcnt(char const *s, char c)
{
	size_t	wcnt;
	char	*sp;

	wcnt = 0;
	sp = (char *)s;
	while (*sp != '\0')
	{
		if (*sp != c)
		{
			sp += my_strlen(sp, c) - 1;
			wcnt++;
		}
		sp++;
	}
	return (wcnt);
}

static void	*free_ele(char **r, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		free(r[i]);
		i++;
	}
	free(r);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	*sp;
	char	**res;
	size_t	i;

	res = (char **)malloc((my_wcnt(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	sp = (char *)s;
	i = 0;
	while (*sp != '\0')
	{
		if (*sp != c)
		{
			res[i] = my_strdup(sp, c);
			if (!res[i])
				return (free_ele(res, i));
			sp += my_strlen(sp, c) - 1;
			i++;
		}
		sp++;
	}
	res[i] = NULL;
	return (res);
}
