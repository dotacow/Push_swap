/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_dlist.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 20:02:14 by yokitane          #+#    #+#             */
/*   Updated: 2024/10/20 20:09:14 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_DLIST_H
# define T_DLIST_H

typedef struct s_dlist
{
	int				num;
	struct s_dlist	*next;
	struct s_dlist	*prev;
}				t_dlist;

#endif