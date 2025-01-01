/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dotacow <dotacow@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:23:19 by yokitane          #+#    #+#             */
/*   Updated: 2025/01/01 18:07:49 by dotacow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// hardcoded 3 cases sorter
void	ft_sort_three(t_stack **stack_a)
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

static void	ft_sort_four(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*min;

	while (ft_ilstsize(*stack_a) > 3)
	{
		min = find_min(*stack_a);
		if (min == *stack_a)
			ft_pb(stack_a, stack_b);
		else if (min == (*stack_a)->next)
		{
			ft_sa(stack_a);
			ft_pb(stack_a, stack_b);
		}
		else if (min == (*stack_a)->next->next)
		{
			ft_ra(stack_a);
			ft_ra(stack_a);
			ft_pb(stack_a, stack_b);
		}
		else
			ft_rra(stack_a);
	}
	ft_sort_three(stack_a);
	while (ft_ilstsize(*stack_b) > 0)
		ft_pa(stack_a, stack_b);
}

static void	ft_sort_five(t_stack **stack_a, t_stack **stack_b)
{
	int	min;

	min = find_min(*stack_a)->num;
	while ((*stack_a)->num != min)
	{
		if (find_index(*stack_a, min) <= 2)
			ft_ra(stack_a);
		else
			ft_rra(stack_a);
	}
	ft_pb(stack_a, stack_b);
	min = find_min(*stack_a)->num;
	while ((*stack_a)->num != min)
	{
		if (find_index(*stack_a, min) <= 1)
			ft_ra(stack_a);
		else
			ft_rra(stack_a);
	}
	ft_pb(stack_a, stack_b);
	ft_sort_three(stack_a);
	ft_pa(stack_a, stack_b);
	ft_pa(stack_a, stack_b);
}

void	ft_sort(t_stack **stack_a, t_stack **stack_b)
{
	if (is_sorted(*stack_a))
		return ;
	if (ft_ilstsize(*stack_a) == 2)
		ft_sa(stack_a);
	else if (ft_ilstsize(*stack_a) == 3)
		ft_sort_three(stack_a);
	else if (ft_ilstsize(*stack_a) == 4)
		ft_sort_four(stack_a, stack_b);
	else if (ft_ilstsize(*stack_a) == 5)
		ft_sort_five(stack_a, stack_b);
	else
		big_sort(stack_a, stack_b);
}

void	big_sort(t_stack **stack_a, t_stack **stack_b)
{
	if (!stack_a || !*stack_a || ft_ilstsize(*stack_a) <= 1)
		return ;
	normalize_stack(stack_a);
	radix_sort(stack_a, stack_b);
}
