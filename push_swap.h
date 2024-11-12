/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 10:41:27 by dotacow           #+#    #+#             */
/*   Updated: 2024/11/12 08:00:55 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

//index is current index
//t_index is true index/rank
//d_next is distance to supposed next
//d_prev is distance to supposed previous
typedef struct s_stack
{
	long			num;
	long			index;
	int				t_index;
	int				d_next;
	int				d_prev;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

//ilstop2
int		find_index(t_stack *stack, int num);
int		find_max(t_stack *stack);
int		find_min(t_stack *stack);
int	is_sorted(t_stack *lst);
//stack operations
int		ft_ilstsize(t_stack *lst);
t_stack	**getlist(int argc, char **argv);
t_stack	*ft_ilstnew(int content);
t_stack	*ft_ilstlast(t_stack **lst);
void	ft_ilstadd_back(t_stack **lst, t_stack *new);
void	ft_ilstprint(t_stack *lst);
//list instructions
void	ft_sort(t_stack **stack_a, t_stack **stack_b);
void	ft_ra(t_stack **stack_a);
void	ft_rb(t_stack **stack_b);
void	ft_rr(t_stack **stack_a, t_stack **stack_b);
void	ft_pa(t_stack **stack_a, t_stack **stack_b);
void	ft_pb(t_stack **stack_a, t_stack **stack_b);
void	ft_rra(t_stack **stack_a);
void	ft_rrb(t_stack **stack_b);
void	ft_rrr(t_stack **stack_a, t_stack **stack_b);
void	ft_sa(t_stack **stack_a);
void	ft_sb(t_stack **stack_b);
void	ft_ss(t_stack **stack_a, t_stack **stack_b);
//exit functions
void	ft_perror(char *str, t_stack **stack_a, t_stack **stack_b);
void	ft_free(char **words);
void	ft_dlstclear(t_stack **lst);

#endif