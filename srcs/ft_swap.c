/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:37:02 by yokitane          #+#    #+#             */
/*   Updated: 2024/11/08 12:08:31 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_swap(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*head;

	if (!*stack || !(*stack)->next)
		return ;
	head = *stack;
	tmp = head->next;
	head->next = tmp->next;
	if (tmp->next)
		tmp->next->prev = head;
	tmp->next = head;
	tmp->prev = head->prev;
	head->prev = tmp;
	*stack = tmp;
}

void	ft_sa(t_stack **stack_a)
{
	ft_swap(stack_a);
	ft_printf("sa\n");
}

void	ft_sb(t_stack **stack_b)
{
	ft_swap(stack_b);
	ft_printf("sb\n");
}

void	ft_ss(t_stack **stack_a, t_stack **stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
	ft_printf("ss\n");
}
