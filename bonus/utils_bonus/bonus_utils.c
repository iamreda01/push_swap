#include "../push_swap_bonus.h"


int     is_valid_move(char *str)
{
    if (ft_strcmp(str, "pa\n") == 0 || ft_strcmp(str, "pb\n") == 0 
    || ft_strcmp(str, "ra\n") == 0 || ft_strcmp(str, "rra\n") == 0 
    || ft_strcmp(str, "rb\n") == 0 || ft_strcmp(str, "rrb\n") == 0
    || ft_strcmp(str, "sa\n") == 0 || ft_strcmp(str, "sb\n") == 0
    || ft_strcmp(str, "ss\n") == 0 || ft_strcmp(str, "rr\n") == 0
    || ft_strcmp(str, "rrr\n") == 0)
        return (1);
    return (0);
}


void    apply_moves_a(char *str, t_list **stack_a)
{
    if (ft_strcmp(str, "sa\n") == 0)
    {
        if (ft_lstsize(*stack_a) > 1)
        swap(*stack_a);
    }
    if (ft_strcmp(str, "ra\n") == 0)
    {
        if (ft_lstsize(*stack_a) > 1)
            rotate(stack_a);
    }
    if (ft_strcmp(str, "rra\n") == 0)
        reverse_rotate(stack_a);
}

void    apply_moves_b(char *str, t_list **stack_b)
{
    if (ft_strcmp(str, "sb\n") == 0)
    {
        if (ft_lstsize(*stack_b) > 1)
        swap(*stack_b);
    }
    if (ft_strcmp(str, "rb\n") == 0)
    {
        if (ft_lstsize(*stack_b) > 1)
            rotate(stack_b);
    }
    if (ft_strcmp(str, "rrb\n") == 0)
        reverse_rotate(stack_b);
}

void    apply_double_moves(char *str, t_list **stack_a, t_list **stack_b)
{
    if (ft_strcmp(str, "ss\n") == 0)
    {
        if (ft_lstsize(*stack_a) > 1 && ft_lstsize(*stack_b) > 1)
        {
            swap(*stack_a);
            swap(*stack_b);
        }
    }
    if (ft_strcmp(str, "rr\n") == 0)
    {
        if (ft_lstsize(*stack_a) > 1 && ft_lstsize(*stack_b) > 1)
        {
            rotate(stack_a);
            rotate(stack_b);
        }
    }
    if (ft_strcmp(str, "rrr\n") == 0)
    {
        reverse_rotate(stack_a);
        reverse_rotate(stack_b);
    }
}

void    apply_moves(t_list **stack_a, t_list **stack_b, char *str)
{
    if (ft_strcmp(str, "sa\n") == 0)
        apply_moves_a(str, stack_a);
    if (ft_strcmp(str, "sb\n") == 0)
        apply_moves_b(str, stack_b);
    if (ft_strcmp(str, "ra\n") == 0)
        apply_moves_a(str, stack_a);
    if (ft_strcmp(str, "rra\n") == 0)
        apply_moves_a(str, stack_a);
    if (ft_strcmp(str, "rb\n") == 0)
        apply_moves_b(str, stack_b);
    if (ft_strcmp(str, "rrb\n") == 0)
        apply_moves_b(str, stack_b);
    if (ft_strcmp(str, "pa\n") == 0)
        push(stack_b, stack_a);
    if (ft_strcmp(str, "pb\n") == 0)
        push(stack_a, stack_b);
    if (ft_strcmp(str, "ss\n") == 0)
        apply_double_moves(str, stack_a, stack_b);
    if (ft_strcmp(str, "rr\n") == 0)
        apply_double_moves(str, stack_a, stack_b);
    if (ft_strcmp(str, "rrr\n") == 0)
        apply_double_moves(str, stack_a, stack_b);
}
