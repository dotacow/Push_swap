/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ilstoperations.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:52:03 by yokitane          #+#    #+#             */
/*   Updated: 2024/11/04 17:56:38 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_ilist	*ft_ilstnew(int content)
{
	t_ilist	*new;

	new = malloc(sizeof(t_ilist));
	if (!new)
		return (NULL);
	new->num = content;
	new->next = NULL;
	return (new);
}

t_ilist	*ft_ilstlast(t_ilist **lst)
{
	t_ilist	*last;

	last = *lst;
	if (!last)
		return (NULL);
	while (last->next)
		last = last->next;
	return (last);
}

void	ft_ilstadd_back(t_ilist **lst, t_ilist *new)
{
	t_ilist	*last;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_ilstlast(lst);
	last->next = new;
	new->next = NULL;
}

void	ft_ilstclear(t_ilist **lst)
{
	t_ilist	*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		free(*lst);
		*lst = tmp;
	}
	free(lst);
}

void	ft_ilstprint(t_ilist *lst)
{
	while (lst)
	{
		ft_printf("%d\n", lst->num);
		lst = lst->next;
	}
}

int	ft_ilstsize(t_ilist *lst)
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