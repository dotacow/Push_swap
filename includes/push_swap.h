/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 10:41:27 by dotacow           #+#    #+#             */
/*   Updated: 2024/11/14 12:45:54 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

// index is current index
// rank is target index
// cost is current calculated cost to get into optimal position
typedef struct s_stack
{
	long			num;
	long			index;
	int				rank;
	int				cost;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

typedef enum e_instructions
{
	RA,
	RB,
	RR,
	PA,
	PB,
	RRA,
	RRB,
	RRR,
	SA,
	SB,
	SS
}	t_instructions;

typedef struct s_instruction_cost
{
	int	ra;
	int	rb;
	int	rr;
	int	pa;
	int	pb;
	int	rra;
	int	rrb;
	int	rrr;
	int	sa;
	int	sb;
	int	ss;

}	t_instruction_cost;
// stack init functions
t_stack	**getlist(int argc, char **argv);
void	rank_stack(t_stack **stack); // tbd
t_stack	*ft_ilstnew(int content);
void	ft_ilstadd_back(t_stack **stack, t_stack *new);
// element/node specific functions
int		find_index(t_stack *stack, int num);
int		find_max(t_stack *stack);
int		find_min(t_stack *stack);
t_stack	*ft_ilstlast(t_stack **stack);
// stack specific functions
int		ft_ilstsize(t_stack *stack);
int		is_sorted(t_stack *stack);
int		is_empty(t_stack *stack);
void	ft_ilstprint(t_stack *stack);
// list instructions (tb combined into a single function)
void	ft_execute(t_instructions instruction);//tbd
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
//algorithim
void	ft_sort(t_stack **stack_a, t_stack **stack_b);
t_stack	*find_optimal(t_stack)//tbd
// exit functions
void	ft_perror(char *str, t_stack **stack_a, t_stack **stack_b);
void	ft_free(char **words);
void	ft_dlstclear(t_stack **lst);

#endif