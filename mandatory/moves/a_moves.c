#include "../push_swap.h"

void    sa(t_list *stack)
{
    swap(stack);
    ft_putstr("sa\n");
}

void    ra(t_list **stack)
{
    rotate(stack);
    ft_putstr("ra\n");
}

void    rra(t_list **stack)
{
    reverse_rotate(stack);
    ft_putstr("rra\n");
}

void    pa(t_list **a, t_list **b)
{
    push(b, a);
    ft_putstr("pa\n");
}