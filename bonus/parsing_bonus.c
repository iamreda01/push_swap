/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 16:11:12 by rel-kass          #+#    #+#             */
/*   Updated: 2025/03/08 00:19:40 by rel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	is_empty(char *str)
{
	int	i;

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
	int		i;
	char	*joined;
	char	*tmp;

	i = 1;
	joined = NULL;
	while (av[i])
	{
		if (is_empty(av[i]))
		{
			free(joined);
			print_error();
		}
		tmp = joined;
		joined = ft_strjoin(joined, av[i]);
		free(tmp);
		i++;
	}
	return (joined);
}

int	is_valid(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

int	is_dup(int nbr, t_list *a)
{
	t_list	*tmp;

	tmp = a;
	while (tmp)
	{
		if (nbr == tmp->content)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

void	check_args(char *str, t_list **a)
{
	char	**splitted;
	int		i;

	i = 0;
	splitted = ft_split(str, ' ');
	free(str);
	while (splitted[i])
	{
		if (!is_valid(splitted[i]))
		{
			free_arr(splitted);
			print_error();
		}
		i++;
	}
	i = 0;
	while (splitted[i])
	{
		if (is_dup(ft_atol(splitted[i]), *a) || ft_atol(splitted[i]) > INT_MAX
			|| ft_atol(splitted[i]) < INT_MIN)
			lst_print_error(a, splitted);
		ft_lstadd_back(a, ft_lstnew(ft_atol(splitted[i])));
		i++;
	}
	free_arr(splitted);
}
