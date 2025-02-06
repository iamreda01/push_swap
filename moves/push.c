/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 00:38:25 by rel-kass          #+#    #+#             */
/*   Updated: 2025/02/06 03:20:35 by rel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
