/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 10:41:27 by dotacow           #+#    #+#             */
/*   Updated: 2024/10/27 18:21:33 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

t_ilist	**getlist(int argc, char **argv);
t_ilist	*ft_ilstnew(int content);
t_ilist	*ft_ilstlast(t_ilist **lst);
void	ft_ilstadd_back(t_ilist **lst, t_ilist *new);
void	ft_ilstclear(t_ilist **lst);
void	ft_ilstprint(t_ilist *lst);

#endif