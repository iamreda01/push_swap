/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 01:24:26 by rel-kass          #+#    #+#             */
/*   Updated: 2025/02/16 01:50:20 by rel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int		is_sorted(t_list *stack)
{
	int i;

	i = 0;
	while (stack->next)
	{
		if (stack->index != i)
			return (0);
		stack = stack->next;
		i++;
	}
	return (1);
}

void	moveto_b(t_list **stack_a, t_list **stack_b)
{
	int chunk;
	int i;

	i= 0;
	if (ft_lstsize(*stack_a) <= 100)
		chunk = 16;
	else
		chunk = 36;
	while ((*stack_a))
	{
		if ((*stack_a)->index <= i)
		{
				push(stack_a, stack_b);
				ft_putstr("pb\n");
				i++;
		}
		else if ((*stack_a)->index <= i + chunk)
		{
				push(stack_a, stack_b);
				rotate(stack_b);
				ft_putstr("pb\nrb\n");
			i++;
		}
		else
		{
				rotate(stack_a);
				ft_putstr("ra\n");
		}
	}
}

void	moveto_a(t_list **stack_a, t_list **stack_b)
{
	t_list	*max;
	int		size;

	size = ft_lstsize(*stack_b);
	while (size > 0)
	{
		set_pos(*stack_b);
		max = ft_max(*stack_b);
		if (max->pos == 0)
		{
			push(stack_b, stack_a);
			ft_putstr("pa\n");
			size--;
		}
		else if (max->pos <= size / 2)
		{
			rotate(stack_b);
			ft_putstr("rb\n");
		}
		else 
		{
			reverse_rotate(stack_b);
			ft_putstr("rrb\n");
		}	
	}
}