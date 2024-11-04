/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 10:41:27 by dotacow           #+#    #+#             */
/*   Updated: 2024/11/04 17:56:51 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

t_ilist	**getlist(int argc, char **argv);
t_ilist	*ft_ilstnew(int content);
t_ilist	*ft_ilstlast(t_ilist **lst);
int		ft_ilstsize(t_ilist *lst);
int		is_sorted(t_ilist *lst);
int		find_index(t_ilist *stack, int num);
int		find_max(t_ilist *stack);
int		find_min(t_ilist *stack);
void	ft_ilstadd_back(t_ilist **lst, t_ilist *new);
void	ft_ilstclear(t_ilist **lst);
void	ft_ilstprint(t_ilist *lst);
void	ft_free(char **words);
void	ft_ra(t_ilist **stack_a);
void	ft_sort(t_ilist **stack_a, t_ilist **stack_b);
void	ft_rb(t_ilist **stack_b);
void	ft_rr(t_ilist **stack_a, t_ilist **stack_b);
void	ft_pa(t_ilist **stack_a, t_ilist **stack_b);
void	ft_pb(t_ilist **stack_a, t_ilist **stack_b);
void	ft_rra(t_ilist **stack_a);
void	ft_rrb(t_ilist **stack_b);
void	ft_rrr(t_ilist **stack_a, t_ilist **stack_b);
void	ft_sa(t_ilist **stack_a);
void	ft_sb(t_ilist **stack_b);
void	ft_ss(t_ilist **stack_a, t_ilist **stack_b);

#endif