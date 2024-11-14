/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:27:34 by yokitane          #+#    #+#             */
/*   Updated: 2024/11/14 12:35:03 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

void	rank_stack(t_stack **stack); // tbd

