/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 22:14:36 by rel-kass          #+#    #+#             */
/*   Updated: 2025/03/02 18:10:18 by rel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_2nb(t_list *stack)
{
	sa(stack);
}

void	sort_3nb(t_list **stack)
{
	t_list	*max;

	max = ft_max(*stack);
	if ((*stack)->index == max->index)
		ra(stack);
	else if ((*stack)->next->index == max->index)
		rra(stack);
	if ((*stack)->index > (*stack)->next->index)
		sa(*stack);
}

void	sort_4nb(t_list **stack_a, t_list **stack_b)
{
	t_list	*min;

	min = ft_min(*stack_a);
	while (*stack_a != min)
	{
		if ((*stack_a)->next == min)
			ra(stack_a);
		else
			rra(stack_a);
	}
	pb(stack_a, stack_b);
	sort_3nb(stack_a);
	pa(stack_a, stack_b);
}

void	sort_5nb(t_list **stack_a, t_list **stack_b)
{
	t_list	*min;

	min = ft_min(*stack_a);
	while (*stack_a != min)
	{
		if ((*stack_a)->next == min)
			ra(stack_a);
		else
			rra(stack_a);
	}
	pb(stack_a, stack_b);
	sort_4nb(stack_a, stack_b);
	pa(stack_a, stack_b);
}
