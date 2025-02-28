#include "../push_swap_bonus.h"

void	sort_2nb(t_list *stack)
{
	swap(stack);
	ft_putstr("sa\n");
}

void	sort_3nb(t_list **stack)
{
	t_list *max;

	max = ft_max(*stack);
	if ((*stack)->index == max->index)
	{
		rotate(stack);
		ft_putstr("ra\n");
	}
	else if ((*stack)->next->index == max->index)
	{
		reverse_rotate(stack);
		ft_putstr("rra\n");
	}
	if ((*stack)->index > (*stack)->next->index)
	{
		swap(*stack);
		ft_putstr("sa\n");
	}
}

void	sort_4nb(t_list **stack_a, t_list **stack_b)
{
	t_list *min;

	min = ft_min(*stack_a);
	while (*stack_a != min)
	{
		rotate(stack_a);
		ft_putstr("ra\n");
	}
	push(stack_a, stack_b);
	ft_putstr("pb\n");
	sort_3nb(stack_a);
	push(stack_b, stack_a);
	ft_putstr("pa\n");
}

void	sort_5nb(t_list **stack_a, t_list **stack_b)
{
	t_list *min;

	min = ft_min(*stack_a);
	while (*stack_a != min)
	{
		rotate(stack_a);
		ft_putstr("ra\n");
	}
	push(stack_a, stack_b);
	ft_putstr("pb\n");
	sort_4nb(stack_a, stack_b);
	push(stack_b, stack_a);
	ft_putstr("pa\n");
}