/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 10:41:27 by dotacow           #+#    #+#             */
/*   Updated: 2024/12/30 18:11:52 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include "instructions.h"

// index is current index
// rank is target index
// cost is current calculated cost to get into optimal position
typedef struct	s_stack
{
	long		num;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;


// stack functions
void	ft_ilstadd_back(t_stack **stack, t_stack *new);
t_stack	*ft_ilstnew(int content);
t_stack	**getlist(int argc, char **argv);
t_stack	*ft_ilstlast(t_stack **lst);
int		ft_ilstsize(t_stack *stack);
void	ft_ilstprint(t_stack *stack);
// node functions (node_helpers.c)
int		find_index(t_stack *stack, int num);
// checks
int		is_sorted(t_stack *stack);
// algorithim
void	ft_sort(t_stack **stack_a, t_stack **stack_b);
void	big_sort(t_stack **stack_a, t_stack **stack_b);
// exit functions
void	ft_perror(char *str, t_stack **stack_a, t_stack **stack_b);
void	ft_free(char **words);
void	ft_dlstclear(t_stack **lst);

#endif