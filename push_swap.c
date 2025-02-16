/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:52:58 by rel-kass          #+#    #+#             */
/*   Updated: 2025/02/16 01:50:20 by rel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_error(void)
{
	ft_putstr("Error");
	exit (1);
}

int main (int ac, char **av)
{
	char *joined;
	t_list *stack_a;
	t_list *stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac > 1)
	{
		joined = join_args(av);
		check_args(joined, &stack_a);
	}
	if (is_sorted(stack_a))
		return (0);
	if (ft_lstsize(stack_a) <= 5)
	{
		if (ft_lstsize(stack_a) == 2)
			sort_2nb(stack_a);
		else if (ft_lstsize(stack_a) == 3)
			sort_3nb(&stack_a);
		else if (ft_lstsize(stack_a) == 4)
			sort_4nb(&stack_a, &stack_b);
		else
			sort_5nb(&stack_a, &stack_b);
	}
	else 
	{
		moveto_b(&stack_a, &stack_b);
		moveto_a(&stack_a, &stack_b);
	}
	while (stack_a)
	{
		printf("content : %d\n", stack_a->content);
		printf("index : %d\n\n", stack_a->index);
		stack_a = stack_a->next;
	}
}