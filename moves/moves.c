/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 04:48:13 by rel-kass          #+#    #+#             */
/*   Updated: 2025/02/16 15:49:08 by rel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_list *list)
{
	if (!list)
		return ;
	swap_int(&list->content, &list->next->content);
	swap_int(&list->index, &list->next->index);
}

void	push(t_list **from, t_list **to)
{
	t_list *tmp;
	
	if (!from || !*from)
		return ;
	tmp = (*from)->next;
	(*from)->next = *to;
	*to = *from;
	*from = tmp;
}

void	rotate(t_list **lst)
{
	if (!lst || !*lst)
		return ;
	t_list *tmp;
	t_list *last;
	
	tmp = (*lst)->next;
	last = ft_lstlast(*lst);
	(*lst)->next = NULL;
	last->next = *lst;
	*lst = tmp;
}

void	reverse_rotate(t_list **lst)
{
	if (!lst || !*lst || !(*lst)->next)
		return ;
	t_list *tmp;
	t_list *last;

	tmp = *lst;
	while (tmp->next->next)
		tmp = tmp->next;
	last = tmp->next;
	tmp->next = NULL;
	last->next = *lst;
	*lst = last;
}
