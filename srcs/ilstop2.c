/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ilstop2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:29:30 by yokitane          #+#    #+#             */
/*   Updated: 2024/11/08 11:52:17 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_sorted(t_stack *lst)
{
	t_stack	*tmp;

	tmp = lst;
	while (tmp->next)
	{
		if (tmp->num > tmp->next->num)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	find_min(t_stack *stack)
{
	int	min;

	min = stack->num;
	while (stack)
	{
		if (stack->num < min)
			min = stack->num;
		stack = stack->next;
	}
	return (min);
}

int	find_max(t_stack *stack)
{
	int	max;

	max = stack->num;
	while (stack)
	{
		if (stack->num > max)
			max = stack->num;
		stack = stack->next;
	}
	return (max);
}

int	find_index(t_stack *stack, int num)
{
	int	index;

	index = 0;
	while (stack)
	{
		if (stack->num == num)
			return (index);
		stack = stack->next;
		index++;
	}
	return (-1);
}
