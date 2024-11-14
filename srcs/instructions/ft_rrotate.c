/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:37:04 by yokitane          #+#    #+#             */
/*   Updated: 2024/11/14 14:04:16 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	ft_rrotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*head;
	t_stack	*prev;

	if (!*stack || !((*stack)->next))
		return ;
	head = *stack;
	tmp = head;
	while (tmp->next)
	{
		prev = tmp;
		tmp = tmp->next;
	}
	tmp->next = head;
	tmp->prev = NULL;
	head->prev = tmp;
	prev->next = NULL;
	*stack = tmp;
}

void	ft_rra(t_stack **stack_a)
{
	ft_rrotate(stack_a);
	ft_printf("rra\n");
}

void	ft_rrb(t_stack **stack_b)
{
	ft_rrotate(stack_b);
	ft_printf("rrb\n");
}

void	ft_rrr(t_stack **stack_a, t_stack **stack_b)
{
	ft_rrotate(stack_a);
	ft_rrotate(stack_b);
	ft_printf("rrr\n");
}
