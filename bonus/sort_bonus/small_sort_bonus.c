#include "../push_swap_bonus.h"

void	sort_2nb(t_list *stack)
{
	sa(stack);
}

void	sort_3nb(t_list **stack)
{
	t_list	*max;

	max = ft_max(*stack);
	if ((*stack)->index == max->index)
		ra(stack);
	else if ((*stack)->next->index == max->index)
		rra(stack);
	if ((*stack)->index > (*stack)->next->index)
		sa(*stack);
}

void	sort_4nb(t_list **stack_a, t_list **stack_b)
{
	t_list	*min;

	min = ft_min(*stack_a);
	while (*stack_a != min)
		ra(stack_a);
	pb(stack_a, stack_b);
	sort_3nb(stack_a);
	pa(stack_a, stack_b);
}

void	sort_5nb(t_list **stack_a, t_list **stack_b)
{
	t_list	*min;

	min = ft_min(*stack_a);
	while (*stack_a != min)
		ra(stack_a);
	pb(stack_a, stack_b);
	sort_4nb(stack_a, stack_b);
	pa(stack_a, stack_b);
}
