/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 01:24:26 by rel-kass          #+#    #+#             */
/*   Updated: 2025/02/14 16:51:30 by rel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int		is_sorted(t_list *stack)
{
	int i;

	i = 0;
	while (stack->next)
	{
		if (stack->indix != i)
			return (0);
		stack = stack->next;
		i++;
	}
	return (1);
}

void	sort_stack(t_list **stack_a, t_list **stack_b)
{
	t_list *tmp_a;
	t_list *tmp_b;
	int i;
	
	tmp_a = *stack_a;
	tmp_b = *stack_b;
	i = 0;
	while (tmp_a)
	{
		if (tmp_a->indix <= i)
		{
			push(&tmp_a, &tmp_b);
			ft_putstr("pb\n");
		}
		else
		{
			rotate(&tmp_a);
			ft_putstr("ra\n");
		}
		i++;
	}
}
