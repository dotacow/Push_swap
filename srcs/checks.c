/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:29:30 by yokitane          #+#    #+#             */
/*   Updated: 2024/11/20 14:04:40 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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

int		is_median(t_stack *stack, int element)
{
	int	less_count = 0;
	int	equal_count = 0;
	int	greater_count = 0;
	t_stack *tmp = stack;

	while (tmp)
	{
		if (tmp->num < element)
			less_count++;
		else if (tmp->num == element)
			equal_count++;
		else
			greater_count++;
		tmp = tmp->next;
	}
	if (less_count <= (less_count + equal_count + greater_count) / 2 &&
		greater_count <= (less_count + equal_count + greater_count) / 2)
	{
		return 1;
	}
	return 0;
}
