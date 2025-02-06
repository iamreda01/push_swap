/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 00:38:25 by rel-kass          #+#    #+#             */
/*   Updated: 2025/02/06 01:22:22 by rel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_list **list_a, t_list **list_b)
{
	t_list *tmp;
	
	if (!list_a || !list_b || !*list_a || !*list_b)
		return ;
	tmp = (*list_a)->next;
	(*list_a)->next = *list_b;
	(*list_b) = (*list_a);
	*list_a = tmp;
}
