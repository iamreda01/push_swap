/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ab_moves_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 22:29:15 by rel-kass          #+#    #+#             */
/*   Updated: 2025/03/01 22:29:21 by rel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	ss(t_list *a, t_list *b)
{
	swap(a);
	swap(b);
	ft_putstr("ss\n");
}

void	rr(t_list **a, t_list **b)
{
	ra(a);
	rb(b);
	ft_putstr("rr\n");
}

void	rrr(t_list **a, t_list **b)
{
	rra(a);
	rrb(b);
	ft_putstr("rrr");
}
