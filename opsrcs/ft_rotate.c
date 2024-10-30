/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 11:37:06 by yokitane          #+#    #+#             */
/*   Updated: 2024/10/30 15:52:55 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_rotate(t_ilist **stack)
{
	t_ilist	*tmp;
	t_ilist	*head;

	if (!*stack || !((*stack)->next))
		return ;
	head = *stack;
	tmp = head;
	*stack = tmp->next;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = head;
	head->next = NULL;
}

void	ft_rotate_a(t_ilist **stack_a)
{
	ft_rotate(stack_a);
	ft_printf("ra\n");
}

void	ft_rotate_b(t_ilist **stack_b)
{
	ft_rotate(stack_b);
	ft_printf(rb\n);
}

void	ft_rotate_r(t_ilist **stack_a, t_ilist **stack_b)
{
	ft_rotate(stack_a);
	ft_rotate(stack_b);
	ft_printf("rr\n");
}
