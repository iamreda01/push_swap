/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 15:52:58 by rel-kass          #+#    #+#             */
/*   Updated: 2025/02/06 03:30:09 by rel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_error(char *str)
{
	ft_putstr(str);
	exit (1);
}
int		is_empty(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}
char	*join_args(char **av)
{
	int i;
	char *joined;
	char *tmp;

	i = 1;
	joined = NULL;
	while (av[i])
	{
		if (is_empty(av[i]))
			print_error("Error!");
		tmp = joined;
		joined = ft_strjoin(joined, av[i]);
		free(tmp);
		i++;
	}
	return (joined);
}

int is_valid(char *str)
{
	int i;

	i = 0 ; 
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if(!(str[i] >= '0' && str[i] <= '9'))
			return (0); 
		i++; 
	}
	return (1);
}
int		is_dup(int nbr, t_list *a)
{
	while (a)
	{
		if (nbr == a->content)
			return (1);
		a = a->next;
	}
	return(0);
}
void	check_args(char *str, t_list *a)
{
	char **splitted;
	int i;

	i = 0;
	splitted = ft_split(str, ' ');
	while (splitted[i])
	{
		if (!is_valid(splitted[i]))
			print_error("Error!");
		i++;
	}
	i = 0;
	while (splitted[i])
	{
		if (is_dup(ft_atoll(splitted[i]), a))
			print_error("Error!");
		ft_lstadd_back(&a, ft_lstnew(ft_atoll(splitted[i])));
		i++;
	}
}

int main (int ac, char **av)
{
	char *joined;
	t_list *a;
	t_list *b;
	
	if (ac > 1)
	{
		joined = join_args(av);
		a = NULL; 
		check_args(joined, a);
	}
}