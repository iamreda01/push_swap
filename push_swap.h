/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-kass <rel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:15:23 by rel-kass          #+#    #+#             */
/*   Updated: 2025/02/12 22:20:37 by rel-kass         ###   ########.fr       */
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
int			ft_lstsize(t_list *lst);
t_list		*ft_lstlast(t_list *lst);

// moves ;
void		swap(t_list *list);
void		swap_int(int *a, int *b);
void		rotate(t_list **lst);
void		push(t_list **from, t_list **to);
void		reverse_rotate(t_list **lst);

#endif