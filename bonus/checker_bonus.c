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

#include "push_swap_bonus.h"

int main (int ac, char **av)
{
	char	*joined;
	t_list 	*stack_a;
	t_list 	*stack_b;
	char	*str;

	stack_a = NULL;
	stack_b = NULL;
	if (ac < 2)
		print_error();
	joined = join_args(av);
	check_args(joined, &stack_a);
	str = get_next_line(0);
	// printf("%s\n" ,str);
	while (str)
	{
		if (is_valid_move(str))
			apply_moves(&stack_a, &stack_b, str);
		else
		{
			print_error();
			free(str);
		}
		free(str);
		str = get_next_line(0);
	}
	if(is_sorted(stack_a))
	{
		ft_putstr("OK\n");
		exit (0);
	}
	else
	{
		ft_putstr("KO\n");
		exit (1);
	}	
}
