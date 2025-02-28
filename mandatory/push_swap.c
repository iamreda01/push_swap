/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:52:58 by rel-kass          #+#    #+#             */
/*   Updated: 2025/02/16 16:00:11 by rel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main (int ac, char **av)
{
	char *joined;
	t_list *stack_a;
	t_list *stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac < 2)
		print_error();
	joined = join_args(av);
	check_args(joined, &stack_a);
	ft_sort(&stack_a, &stack_b);
	free_lst(&stack_a);
	// if (!stack_b)
	// 	printf("yessssssssss\n\n\n\n");
	// while (stack_b)
	// {
	// 	printf("stack b content : %d\n", stack_b->content);
	// 	printf("index : %d\n\n", stack_b->index);
	// 	stack_b = stack_b->next;
	// }
	// while (stack_a)
	// {
	// 	printf("content : %d\n", stack_a->content);
	// 	printf("index : %d\n\n", stack_a->index);
	// 	// printf("pos : %d\n", stack_a->pos);
	// 	stack_a = stack_a->next;
	// }
	// free_lst(&stack_b);
	// ft_lstclear(&stack_a, &free);
	// if (stack_a)
	// 	printf("m here");
}