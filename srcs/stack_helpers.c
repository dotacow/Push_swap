/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_helpers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:52:03 by yokitane          #+#    #+#             */
/*   Updated: 2024/12/30 15:57:44 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_ilstprint(t_stack *lst)
{
	while (lst)
	{
		ft_printf("%d\n", lst->num);
		lst = lst->next;
	}
}

int	ft_ilstsize(t_stack *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

int	is_sorted(t_stack *lst)
{
	t_stack	*tmp;

	tmp = lst;
	while (tmp->next)
	{
		if (tmp->num > tmp->next->num)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
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