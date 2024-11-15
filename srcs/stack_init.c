/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:27:34 by yokitane          #+#    #+#             */
/*   Updated: 2024/11/15 17:49:58 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_ilstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*last;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_ilstlast(lst);
	last->next = new;
	new->prev = last;
	new->next = NULL;
}

t_stack	*ft_ilstnew(int content)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->num = content;
	new->prev = NULL;
	new->next = NULL;
	return (new);
}

t_stack	*ft_ilstlast(t_stack **lst)
{
	t_stack	*last;

	last = *lst;
	while (last->next)
		last = last->next;
	return (last);
}
static void init_rank(t_stack **stack)
{
	t_stack *tmp;

	tmp = *stack;
	while (tmp)
	{
		tmp->rank = -1;
		tmp = tmp->next;
	}
}
void	rank_stack(t_stack **stack)
{
	t_stack *current;
	t_stack *tmp;
	long rank;

	init_rank(stack);
	rank = 0;
	while (rank < ft_ilstsize(*stack))
	{
		current = NULL;
		tmp = *stack;
		while (tmp)
		{
			if (tmp->rank == -1 && (!current || tmp->num < current->num))
				current = tmp;
			tmp = tmp->next;
		}
		if (!current)
			break;
		current->rank = rank++;
	}
}
