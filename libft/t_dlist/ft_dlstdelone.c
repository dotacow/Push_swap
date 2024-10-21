/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstdelone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 20:51:27 by yokitane          #+#    #+#             */
/*   Updated: 2024/10/21 14:20:34 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_dlstdelone(t_dlist *lst, void (*del)(int))
{
	if (!lst || !del)
		return ;
	del(lst->num);
	free(lst);
}
