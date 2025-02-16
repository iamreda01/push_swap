/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 01:03:54 by rel-kass          #+#    #+#             */
/*   Updated: 2025/02/16 00:16:31 by rel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

void f(int **a)
{
	int c = 13;
	*a = &c;
}

int main ()
{
	
	int *a;
	
	int b = 52;
	a = &b;
	
	printf("*a = %d\n", *a);
	f(&a);
	printf("*a = %d\n", *a);
}

void	moveto_a(t_list **stack_a, t_list **stack_b)
{
	int		lst_size;
	int		max_pos;

	lst_size = ft_lstsize(stack_b);
	while (lst_size)
	{
		set_pos(*stack_b);
		max_pos = ft_max_pos(*stack_b);
		while ((*stack_b)->pos != max_pos)
		{
			if ((*stack_b)->pos < lst_size / 2)
			{
				rotate(stack_b);
				ft_putstr("rb\n");
			}
			else 
			{
				reverse_rotate(stack_b);
				ft_putstr("rrb\b");
			}
		}
		push(stack_a, stack_b);
		ft_putstr("pa\n");
		lst_size--;
	}
}