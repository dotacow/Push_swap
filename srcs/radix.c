/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dotacow <dotacow@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/30 15:39:32 by yokitane          #+#    #+#             */
/*   Updated: 2025/01/01 18:05:52 by dotacow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	get_max_bits(t_stack *stack)
{
	int		max_num;
	int		max_bits;

	if (!stack)
		return (0);
	max_num = stack->rank;
	max_bits = 0;
	while (stack)
	{
		if (stack->rank > max_num)
			max_num = stack->rank;
		stack = stack->next;
	}
	while ((max_num >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

static int	ft_find_index(int *arr, int size, int value)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (arr[i] == value)
			return (i);
		i++;
	}
	return (-1);
}

void	normalize_stack(t_stack **stack)
{
	t_stack	*tmp;
	int		*values;
	int		i;

	if (!stack || !*stack || ft_ilstsize(*stack) < 2)
		return ;
	values = malloc(sizeof(int) * ft_ilstsize(*stack));
	if (!values)
		ft_perror("Error\n", stack, NULL);
	tmp = *stack;
	i = 0;
	while (tmp)
	{
		values[i++] = tmp->num;
		tmp = tmp->next;
	}
	ft_rank(values, 0, i - 1);
	tmp = *stack;
	while (tmp)
	{
		tmp->rank = ft_find_index(values, i, tmp->num);
		tmp = tmp->next;
	}
	free(values);
}

void	ft_rank(int *arr, int low, int high)
{
	int	i;
	int	j;
	int	temp;

	i = low;
	while (i < high)
	{
		j = i + 1;
		while (j <= high)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			j++;
		}
		i++;
	}
}

void	radix_sort(t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	int		j;
	int		size;
	int		max_bits;

	if (!stack_a || !*stack_a || ft_ilstsize(*stack_a) < 2)
		return ;
	size = ft_ilstsize(*stack_a);
	max_bits = get_max_bits(*stack_a);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if ((((*stack_a)->rank >> i) & 1) == 1)
				ft_ra(stack_a);
			else
				ft_pb(stack_a, stack_b);
			j++;
		}
		while (ft_ilstsize(*stack_b) > 0)
			ft_pa(stack_a, stack_b);
		i++;
	}
}
