/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:23:19 by yokitane          #+#    #+#             */
/*   Updated: 2024/12/30 16:05:19 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_sort_three(t_stack **stack_a)
// hardcoded 3 cases sorter
{
	int	first;
	int	second;
	int	third;

	if (is_sorted(*stack_a))
		return ;
	first = (*stack_a)->num;
	second = (*stack_a)->next->num;
	third = (*stack_a)->next->next->num;
	if (first > second && second < third && first < third)
		ft_sa(stack_a);
	else if (first > second && second > third)
	{
		ft_sa(stack_a);
		ft_rra(stack_a);
	}
	else if (first > second && second < third && first > third)
		ft_ra(stack_a);
	else if (first < second && second > third && first < third)
	{
		ft_sa(stack_a);
		ft_ra(stack_a);
	}
	else if (first < second && second > third && first > third)
		ft_rra(stack_a);
}

static void	ft_sort_four(t_stack *stack_a);
static void	ft_sort_five(t_stack *stack_a);

void	ft_sort(t_stack **stack_a, t_stack **stack_b)
{
	if (is_sorted(*stack_a))
		return ;
	if (ft_ilstsize(*stack_a) == 2)
		ft_sa(stack_a);
	else if (ft_ilstsize(*stack_a) == 3)
		ft_sort_three(stack_a);
	else if (ft_ilstsize(*stack_a) == 4)
		ft_sort_four(stack_a);
	else if (ft_ilstsize(*stack_a) == 5)
		ft_sort_five(stack_a);
	else
		big_sort(stack_a, stack_b);
}
