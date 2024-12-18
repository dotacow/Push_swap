/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_helpers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:33:57 by yokitane          #+#    #+#             */
/*   Updated: 2024/11/20 12:12:02 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
// returns smallest number in the stack
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

// returns largest number in the stack
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
// returns index of given num in stack
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
int	find_median(t_stack *stack)
//returns if the node's rank is the median within a certain range
{
	
}
