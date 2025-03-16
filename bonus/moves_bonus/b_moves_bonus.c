/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_moves_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 22:29:26 by rel-kass          #+#    #+#             */
/*   Updated: 2025/03/01 22:29:31 by rel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	sb(t_list *stack)
{
	swap(stack);
	ft_putstr("sb\n");
}

void	rb(t_list **stack)
{
	rotate(stack);
	ft_putstr("rb\n");
}

void	rrb(t_list **stack)
{
	reverse_rotate(stack);
	ft_putstr("rrb\n");
}

void	pb(t_list **a, t_list **b)
{
	push(a, b);
	ft_putstr("pb\n");
}
