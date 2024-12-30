/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node_helpers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:33:57 by yokitane          #+#    #+#             */
/*   Updated: 2024/12/30 15:35:45 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
// returns index of given num in stack
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
