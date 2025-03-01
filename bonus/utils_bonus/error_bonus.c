/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 15:42:34 by rel-kass          #+#    #+#             */
/*   Updated: 2025/02/16 15:43:07 by rel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_bonus.h"

void	print_error(void)
{
	ft_putstr("Error");
	exit (1);
}

void	lst_print_error(t_list **stack, char **str)
{
	if (stack)
		free_lst(stack);
	free_arr(str);
	ft_putstr("Error");
	exit (1);
}

void	free_arr(char **str)
{
	int i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}