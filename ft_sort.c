/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:23:19 by yokitane          #+#    #+#             */
/*   Updated: 2024/11/01 21:45:11 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void ft_sort_three(t_ilist **stack_a)
{
	int first;
	int second;
	int third;

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
static void ft_sort_four(t_ilist **stack_a, t_ilist **stack_b)
{
	int min;

	if (is_sorted(*stack_a))
		return ;
	min = find_min(*stack_a);
	if (find_index(*stack_a, min) == 0)
		ft_pb(stack_a, stack_b);
	else if (find_index(*stack_a, min) == 1)
	{
		ft_ra(stack_a);
		ft_pb(stack_a, stack_b);
	}
	else if (find_index(*stack_a, min) == 2)
	{
		ft_ra(stack_a);
		ft_sa(stack_a);
		ft_pb(stack_a, stack_b);
	}
	else if (find_index(*stack_a, min) == 3)
	{
		ft_rra(stack_a);
		ft_pb(stack_a, stack_b);
	}
	ft_sort_three(stack_a);
	ft_pa(stack_a, stack_b);
}

static void ft_sort_five(t_ilist **stack_a, t_ilist **stack_b)
{
	int min;

	min = find_min(*stack_a);
	while ((*stack_a)->num != min)
	{
		if (find_index(*stack_a, min) <= 2)
			ft_ra(stack_a);
		else
			ft_rra(stack_a);
	}
	ft_pb(stack_a, stack_b);
	min = find_min(*stack_a);
	while ((*stack_a)->num != min)
	{
		if (find_index(*stack_a, min) < 1)
			ft_ra(stack_a);
		else
			ft_rra(stack_a);
	}
	ft_pb(stack_a, stack_b);
	ft_sort_three(stack_a);
	ft_pa(stack_a, stack_b);
	ft_pa(stack_a, stack_b);
}

void   ft_sort(t_ilist **stack_a, t_ilist **stack_b)
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
	{
		write(2, "come here later ):\n", 19);
		exit(1);
	}
}
