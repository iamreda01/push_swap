#include "../push_swap_bonus.h"

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

int		ft_max_pos(t_list *stack)
{
	int		max_pos;
	if (!stack)
		return (0);

	max_pos = 0;
	while (stack->next)
	{
		if (stack->pos > max_pos)
			max_pos = stack->pos;
		stack = stack->next;
	}
	return (max_pos);
}