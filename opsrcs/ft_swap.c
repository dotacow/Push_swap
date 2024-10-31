/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:37:02 by yokitane          #+#    #+#             */
/*   Updated: 2024/10/31 19:04:47 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_swap(t_ilist **stack)
{
	t_ilist	*tmp;
	t_ilist	*head;

	if (!*stack || !(*stack)->next)
		return ;
	head = *stack;
	tmp = head->next;
	head->next = tmp->next;
	tmp->next = head;
	*stack = tmp;
}

void	ft_sa(t_ilist **stack_a)
{
	ft_swap(stack_a);
	ft_printf("sa\n");
}

void	ft_sb(t_ilist **stack_b)
{
	ft_swap(stack_b);
	ft_printf("sb\n");
}

void	ft_ss(t_ilist **stack_a, t_ilist **stack_b)
{
	ft_swap(stack_a);
	ft_swap(stack_b);
	ft_printf("ss\n");
}
