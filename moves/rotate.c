/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 02:09:10 by rel-kass          #+#    #+#             */
/*   Updated: 2025/02/06 03:20:38 by rel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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