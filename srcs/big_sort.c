/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dotacow <dotacow@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:39:32 by yokitane          #+#    #+#             */
/*   Updated: 2025/01/01 16:13:12 by dotacow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	big_sort(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*head;

	head = *stack_a;
	while (ft_ilstsize(*stack_a) > 0)
	{
		if (head->num == find_min(*stack_a)->num)
		{
			ft_pb(stack_a, stack_b);
		}
		else if (find_index(*stack_a,find_min(*stack_a)->num)
				< ft_ilstsize(*stack_a) / 2)
		{
			ft_ra(stack_a);
		}
		else
		{
			ft_rra(stack_a);
		}
		head = *stack_a;
		if (is_sorted(*stack_a))
			break ;
	}
	while (*stack_b)
		ft_pa(stack_a, stack_b);
}
