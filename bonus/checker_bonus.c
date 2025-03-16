/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:52:58 by rel-kass          #+#    #+#             */
/*   Updated: 2025/03/02 15:22:39 by rel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	checker_output(t_list *stack_a, t_list *stack_b)
{
	if (is_sorted(stack_a))
	{
		ft_putstr("OK\n");
		free_lst(&stack_a);
		exit(0);
	}
	else
	{
		ft_putstr("KO\n");
		free_lst(&stack_a);
		if (stack_b)
			free_lst(&stack_b);
		exit(1);
	}
}

int	main(int ac, char **av)
{
	char	*joined;
	t_list	*stack_a;
	t_list	*stack_b;
	char	*str;

	(1) && (stack_a = NULL, stack_b = NULL);
	if (ac < 2)
		return (0);
	joined = join_args(av);
	check_args(joined, &stack_a);
	str = get_next_line(0);
	while (str)
	{
		if (is_valid_move(str))
			apply_moves(&stack_a, &stack_b, str);
		else
		{
			free(str);
			print_error();
		}
		free(str);
		str = get_next_line(0);
	}
	free(str);
	checker_output(stack_a, stack_b);
}
