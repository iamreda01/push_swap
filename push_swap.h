/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:15:23 by rel-kass          #+#    #+#             */
/*   Updated: 2025/02/14 23:55:55 by rel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// libs;
# include <unistd.h>
# include <stdlib.h>
# include <libc.h>

// struct;
typedef struct s_list
{
	int	content;
	int	indix;
	struct s_list *next;
} t_list;

// utils;
int			ft_strlen(char *str);
void		ft_putstr(char *str);
char		**ft_split(char *s, char c);
char		*ft_strjoin(char *s1, char *s2);
size_t		ft_strlcpy(char *dst, char *src, size_t dstsize);
int			ft_strcmp(char *s1, char *s2);
long long	ft_atoll(char *str);

// list_utils;
t_list		*ft_lstnew(int content);
void		ft_lstadd_back(t_list **lst, t_list *new);
t_list		*ft_lstlast(t_list *lst);
int			ft_lstsize(t_list *lst);

// moves ;
void		swap(t_list *list);
void		swap_int(int *a, int *b);
void		rotate(t_list **lst);
void		push(t_list **from, t_list **to);
void		reverse_rotate(t_list **lst);

// sort;
int		is_sorted(t_list *stack);
void	sort_2nb(t_list *stack);
void	sort_3nb(t_list **stack);
void	sort_4nb(t_list **stack_a, t_list **stack_b);
void	sort_5nb(t_list **stack_a, t_list **stack_b);
void	sort_stack(t_list **stack_a, t_list **stack_b);

// tools;
t_list		*ft_max(t_list *stack);
t_list		*ft_min(t_list *stack);


#endif