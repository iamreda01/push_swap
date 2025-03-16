/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 22:14:50 by rel-kass          #+#    #+#             */
/*   Updated: 2025/03/08 00:04:18 by rel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_max(t_list *stack)
{
	t_list	*max;

	if (!stack)
		return (NULL);
	max = stack;
	while (stack->next)
	{
		if (stack->next->content > max->content)
			max = stack->next;
		stack = stack->next;
	}
	return (max);
}

t_list	*ft_min(t_list *stack)
{
	t_list	*min;

	if (!stack)
		return (NULL);
	min = stack;
	while (stack->next)
	{
		if (min->content > stack->next->content)
			min = stack->next;
		stack = stack->next;
	}
	return (min);
}

void	set_pos(t_list *stack)
{
	int	pos;

	pos = 0;
	while (stack)
	{
		stack->pos = pos;
		stack = stack->next;
		pos++;
	}
}

int	is_case(t_list **stack)
{
	int		count;
	t_list	*tmp;
	int		size;

	size = ft_lstsize(*stack);
	count = 0;
	tmp = *stack;
	while (tmp->next)
	{
		if (tmp->index - tmp->next->index <= 4)
			count++;
		tmp = tmp->next;
	}
	if (count * 10 >= 6 * size)
		return (1);
	return (0);
}
