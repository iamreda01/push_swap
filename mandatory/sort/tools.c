#include "../push_swap.h"

t_list		*ft_max(t_list *stack)
{
	t_list *max;
	if (!stack)
		return (NULL);

	max = stack;
	while (stack->next)
	{
		if (stack->next->content > max->content)
			max = stack->next;
		stack = stack->next;
	}
	return (max);
}

t_list		*ft_min(t_list *stack)
{
	t_list *min;
	if (!stack)
		return (NULL);

	min = stack;
	while (stack->next)
	{
		if (min->content > stack->next->content)
			min = stack->next;
		stack = stack->next;
	}
	return (min);
}

void	set_pos(t_list *stack)
{
	int pos;

	pos = 0;
	while (stack)
	{
		stack->pos = pos;
		stack = stack->next;
		pos++;
	}
}

int		decide(t_list *stack)
{
	int		count;
	t_list *tmp;
	int		size;

	size = ft_lstsize(stack);
	count = 0;
	tmp = stack;
	while (tmp->next)
	{
		if (tmp->next - tmp->next->next <= 4)
			count++;
		tmp = tmp->next;
	}
	if (count * 10 >= 6 * size)
		return (1);
	return (0);
}