/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 10:41:27 by dotacow           #+#    #+#             */
/*   Updated: 2024/11/20 14:01:55 by yokitane         ###   ########.fr       */
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

typedef enum	e_loc
{
	TOP_A,
	BOTTOM_A,
	TOP_B,
	BOTTOM_B
}	t_loc;

typedef struct	s_part
{
	t_loc	loc;
	int	size;
}	t_part;
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
int		find_median(t_stack *stack);
// stack specific functions
int		ft_ilstsize(t_stack *stack);
void	ft_ilstprint(t_stack *stack);
// partition functions
// checks
int		is_sorted(t_stack *stack);
int		is_median(t_stack *stack, int median);
// algorithim
void	ft_sort(t_stack **stack_a, t_stack **stack_b);
void	ft_sort_three(t_stack **stack_a);
void	big_sort(t_stack *stack_a, t_stack *stack_b);
void	rotate_to_top(t_stack **stack, int index);
// exit functions
void	ft_perror(char *str, int fd, ...);
void	ft_free(char **words);
void	ft_dlstclear(t_stack **lst);

#endif