/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 10:41:27 by dotacow           #+#    #+#             */
/*   Updated: 2024/11/16 10:50:55 by yokitane         ###   ########.fr       */
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
	long		rank;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

typedef struct	s_stacks
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_instruction_list	*instructions;
}	t_stacks;

// stack init functions
void	rank_stack(t_stack **stack); // tbd
void	ft_ilstadd_back(t_stack **stack, t_stack *new);
t_stack	*ft_ilstnew(int content);
t_stack	**getlist(int argc, char **argv);
t_stack	*ft_ilstlast(t_stack **lst);
// node specific functions (node_helpers.c)
int		find_index(t_stack *stack, int num);
int		find_max(t_stack *stack);
int		find_min(t_stack *stack);
// stack specific functions
int		ft_ilstsize(t_stack *stack);
void	ft_ilstprint(t_stack *stack);
// list instructions
	//tbd
// checks
int		is_sorted(t_stack *stack);
int		is_empty(t_stack *stack);//tbd
// algorithim
void	ft_sort(t_stack **stack_a, t_stack **stack_b);
 void	ft_sort_three(t_stack **stack_a);
// exit functions
void	ft_perror(char *str, t_stack **stack_a, t_stack **stack_b);
void	ft_free(char **words);
void	ft_dlstclear(t_stack **lst);

#endif