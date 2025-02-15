#include "../push_swap.h"

t_list		*ft_max(t_list *stack)
{
	t_list *max;

	max = stack;
	while (stack->next)
	{
		if (stack->next->indix > max->indix)
			max = stack->next;
		stack = stack->next;
	}
	return (max);
}

t_list		*ft_min(t_list *stack)
{
	t_list *min;

	min = stack;
	while (stack->next)
	{
		if (min->indix > stack->next->indix)
			min = stack->next;
		stack = stack->next;
	}
	return (min);
}