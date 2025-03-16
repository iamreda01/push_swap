/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus_v2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 22:32:10 by rel-kass          #+#    #+#             */
/*   Updated: 2025/03/02 18:12:33 by rel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	swap_int(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	which_chunk(int size)
{
	int	chunk;

	chunk = 0;
	if (size <= 100)
		chunk = 16;
	else
		chunk = 36;
	return (chunk);
}

int	is_sorted(t_list *stack)
{
	int	i;

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
