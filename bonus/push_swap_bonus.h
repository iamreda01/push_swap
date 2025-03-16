/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:15:23 by rel-kass          #+#    #+#             */
/*   Updated: 2025/03/07 15:12:53 by rel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

// libs;
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "gnl_bonus/get_next_line.h"

// struct;
typedef struct s_list
{
	int				content;
	int				index;
	int				pos;
	struct s_list	*next;
}	t_list;

// utils;
int			ft_strlen(char *str);
void		ft_putstr(char *str);
char		**ft_split(char *s, char c);
char		*ft_strjoin(char *s1, char *s2);
size_t		ft_strlcpy(char *dst, char *src, size_t dstsize);
int			ft_strcmp(char *s1, char *s2);
long		ft_atol(char *str);
char		*ft_strdup(char *s1);
int			which_chunk(int size);

// list_utils;
t_list		*ft_lstnew(int content);
void		ft_lstadd_back(t_list **lst, t_list *new);
t_list		*ft_lstlast(t_list *lst);
int			ft_lstsize(t_list *lst);
void		free_lst(t_list **stack);

// errors;
void		print_error(void);
void		lst_print_error(t_list **stack, char **str);
void		free_arr(char **str);

// parsing;
int			is_empty(char *str);
char		*join_args(char **av);
int			is_valid(char *str);
int			is_dup(int nbr, t_list *a);
void		check_args(char *str, t_list **a);

// moves ;
void		swap(t_list *list);
void		rotate(t_list **lst);
void		push(t_list **from, t_list **to);
void		reverse_rotate(t_list **lst);
void		sa(t_list *stack);
void		ra(t_list **stack);
void		rra(t_list **stack);
void		pa(t_list **a, t_list **b);
void		sb(t_list *stack);
void		rb(t_list **stack);
void		rrb(t_list **stack);
void		pb(t_list **a, t_list **b);
void		ss(t_list *a, t_list *b);
void		rr(t_list **a, t_list **b);
void		rrr(t_list **a, t_list **b);

// sort;
int			is_sorted(t_list *stack);
void		swap_int(int *a, int *b);

// bonus;
int			is_valid_move(char *str);
void		apply_moves(t_list **stack_a, t_list **stack_b, char *str);
void		apply_moves_a(char *str, t_list **stack_a);
void		apply_moves_b(char *str, t_list **stack_b);
void		apply_double_moves(char *str, t_list **stack_a, t_list **stack_b);
void		checker_output(t_list *stack_a, t_list *stack_b);

#endif