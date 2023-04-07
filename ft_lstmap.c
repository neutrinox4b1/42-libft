/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jelee2 <jelee2@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/23 20:59:30 by jelee2            #+#    #+#             */
/*   Updated: 2023/03/24 20:43:21 by jelee2           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*init_res(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*fcontent;
	t_list	*new;

	if (!lst)
		return (NULL);
	fcontent = f(lst->content);
	if (!fcontent)
		return (NULL);
	new = ft_lstnew(fcontent);
	if (!new)
	{
		del(fcontent);
		return (NULL);
	}
	return (new);
}

static t_list	*nrt(t_list *r, void *c, void *(*f)(void *), void (*d)(void *))
{
	void	*fcontent;
	t_list	*new;

	fcontent = f(c);
	if (!fcontent)
	{
		ft_lstclear(&r, d);
		return (NULL);
	}
	new = ft_lstnew(fcontent);
	if (!new)
	{
		d(fcontent);
		ft_lstclear(&r, d);
		return (NULL);
	}
	return (new);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*cur;
	t_list	*new;

	res = init_res(lst, f, del);
	if (!res)
		return (NULL);
	cur = res;
	lst = lst->next;
	while (lst)
	{
		new = nrt(res, lst->content, f, del);
		if (!new)
			return (NULL);
		cur->next = new;
		cur = cur->next;
		lst = lst->next;
	}
	return (res);
}
