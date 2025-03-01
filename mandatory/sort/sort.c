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


void	moveto_b(t_list **stack_a, t_list **stack_b, int decis)
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
			pb(stack_a, stack_b);
			i++;
		}
		else if ((*stack_a)->index <= i + chunk)
		{
			pb(stack_a, stack_b);
			rb(stack_b);
			i++;
		}
		else if ( decis) 
			ra(stack_a);
		else
			rra(stack_a);
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
			pa(stack_a, stack_b);
			size--;
		}
		else if (max->pos <= size / 2)
			rb(stack_b);
		else 
			rrb(stack_b);
	}
}


void	ft_sort(t_list **stack_a, t_list **stack_b)
{
	int decis;
	decis = is_case(*stack_a);
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
		moveto_b(stack_a, stack_b, decis);
		moveto_a(stack_a, stack_b);
	}
}
