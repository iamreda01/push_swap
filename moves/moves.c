/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 04:48:13 by rel-kass          #+#    #+#             */
/*   Updated: 2025/02/06 04:48:35 by rel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_list *list)
{
	if (ft_lstsize(list) <= 1)
		return ;
	swap_int(list->content, list->next->content);
}

void	push(t_list **from, t_list **to)
{
	t_list *tmp;
	
	if (!from || !to || !*from || !*to)
		return ;
	tmp = (*from)->next;
	(*from)->next = *to;
	(*to) = (*from);
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
	lst = tmp;
}