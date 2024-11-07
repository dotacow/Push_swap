/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dotacow <dotacow@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 10:41:27 by dotacow           #+#    #+#             */
/*   Updated: 2024/11/07 17:05:12 by dotacow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct s_stacks
{
	t_ilist	*head_a;
	t_ilist	*head_b;
	struct t_values	*values;
	struct t_moves	*moves;
	struct t_cmoves	*cmoves;

}		t_stacks;



// num operations
int		find_index(t_ilist *stack, int num);
int		find_max(t_ilist *stack);
int		find_min(t_ilist *stack);
//stack operations
int		ft_ilstsize(t_ilist *lst);
t_ilist	**getlist(int argc, char **argv);
t_ilist	*ft_ilstnew(int content);
t_ilist	*ft_ilstlast(t_ilist **lst);
void	ft_ilstadd_back(t_ilist **lst, t_ilist *new);
void	ft_ilstclear(t_ilist **lst);
void	ft_ilstprint(t_ilist *lst);
void	ft_free(char **words);
//list instructions
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