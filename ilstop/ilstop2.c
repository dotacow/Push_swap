/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ilstop2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:29:30 by yokitane          #+#    #+#             */
/*   Updated: 2024/11/01 13:21:03 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_sorted(t_ilist *lst)
{
	t_ilist	*tmp;

	tmp = lst;
	while (tmp->next)
	{
		if (tmp->num > tmp->next->num)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}