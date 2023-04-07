/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 18:32:33 by jelee2            #+#    #+#             */
/*   Updated: 2023/03/24 19:47:05 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cur;
	t_list	*to_fr;

	if (!lst)
		return ;
	cur = *lst;
	while (cur)
	{
		del(cur->content);
		to_fr = cur;
		cur = cur->next;
		free(to_fr);
	}
	*lst = NULL;
}
