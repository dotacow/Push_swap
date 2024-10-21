/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstiter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 20:51:24 by yokitane          #+#    #+#             */
/*   Updated: 2024/10/21 14:21:03 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_dlstiter(t_dlist *lst, void (*f)(int))
{
	t_dlist	*current;

	if (!lst || !f)
		return ;
	current = lst;
	while (current)
	{
		f(current->num);
		current = current->next;
	}
}
