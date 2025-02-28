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
	int size;

	i = 0;
	size = ft_lstsize(*stack_a);
	if (size <= 100)
		chunk = 16;
	else
		chunk = 36;
	while (i < size)
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
			ft_putstr("pb\n");
			if (ft_lstsize(*stack_b) > 1)
			{
				rotate(stack_b);
				ft_putstr("rb\n");
			}
			// rotate(stack_b);
			// ft_putstr("rb\n");
			i++;
		}
		else
		{
				rotate(stack_a);
				ft_putstr("ra\n");
		}
	}
	// printf("stack a size : %d\n", ft_lstsize(*stack_a));
}


void	moveto_a(t_list **stack_a, t_list **stack_b)
{
	t_list	*max;
	int		size;

	size = ft_lstsize(*stack_b);
	// printf("stack b size :  %d\n", size);
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

void	ft_sort(t_list **stack_a, t_list **stack_b)
{
	if (is_sorted(*stack_a))
	{
		free_lst(stack_a);
		exit (0);
	}
	if (ft_lstsize(*stack_a) <= 5)
	{
		if (ft_lstsize(*stack_a) == 2)
			sort_2nb(*stack_a);
		else if (ft_lstsize(*stack_a) == 3)
			sort_3nb(stack_a);
		else if (ft_lstsize(*stack_a) == 4)
			sort_4nb(stack_a, stack_b);
		else
			sort_5nb(stack_a, stack_b);
	}
	else 
	{
		moveto_b(stack_a, stack_b);
		moveto_a(stack_a, stack_b);
	}
}