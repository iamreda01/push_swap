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

#include "../push_swap_bonus.h"

void	swap(t_list *list)
{
	if (!list)
		return ;
	if (ft_lstsize(list) < 2)
		return ;
	swap_int(&list->content, &list->next->content);
	swap_int(&list->index, &list->next->index);
}

void	push(t_list **from, t_list **to)
{
	t_list	*tmp;

	if (!from || !*from)
		return ;
	tmp = (*from)->next;
	(*from)->next = *to;
	*to = *from;
	*from = tmp;
}

void	rotate(t_list **lst)
{
	t_list	*tmp;
	t_list	*last;

	if (!lst || !*lst)
		return ;
	if (ft_lstsize(*lst) < 2)
		return ;
	tmp = (*lst)->next;
	last = ft_lstlast(*lst);
	(*lst)->next = NULL;
	last->next = *lst;
	*lst = tmp;
}

void	reverse_rotate(t_list **lst)
{
	t_list	*tmp;
	t_list	*last;

	if (!lst || !*lst || !(*lst)->next)
		return ;
	if (ft_lstsize(*lst) < 2)
		return ;
	tmp = *lst;
	while (tmp->next->next)
		tmp = tmp->next;
	last = tmp->next;
	tmp->next = NULL;
	last->next = *lst;
	*lst = last;
}
