/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ilstoperations.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:52:03 by yokitane          #+#    #+#             */
/*   Updated: 2024/11/14 12:29:12 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"



t_stack	*ft_ilstlast(t_stack **lst)
{
	t_stack	*last;

	last = *lst;
	if (!last)
		return (NULL);
	while (last->next)
		last = last->next;
	return (last);
}

void	ft_dlstclear(t_stack **lst)
{
	t_stack	*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		free(*lst);
		*lst = tmp;
	}
	free(lst);
}

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
