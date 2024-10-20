/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_dlist.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 20:02:14 by yokitane          #+#    #+#             */
/*   Updated: 2024/10/20 21:01:43 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_DLIST_H
# define T_DLIST_H

typedef struct s_dlist
{
	int				num;
	struct s_dlist	*next;
	struct s_dlist	*prev;
}					t_dlist;

void		ft_dlstadd_back(t_dlist **lst, t_dlist *new);
void		ft_dlstadd_front(t_dlist **lst, t_dlist *new);
void		ft_dlstclear(t_dlist **lst);
void		ft_dlstdelone(t_dlist *lst);
void		ft_dlstiter(t_dlist *lst, void (*f)(void *));
t_dlist		*ft_dlstmap(t_dlist *lst, void *(*f)(void *));
t_dlist		*ft_dlstnew(void *content);
int			ft_dlstsize(t_dlist *lst);

#endif