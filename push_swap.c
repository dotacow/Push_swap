/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:33:46 by yokitane          #+#    #+#             */
/*   Updated: 2024/11/14 13:38:55 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

// push_swap
// 	work on checker (bonus)
//--------------------
// work on algorithim (jordanian alg)
//  (three way quick sort)
//  treat each end (head, tail) of stack as a seperate stack
//  have 3 pointers?
//-------------------
// tbd:
// node_cost()
// rank_stack()
// ft_execute()
// find_optimal()
// ft_perror();
int	main(int argc, char **argv)
{
	t_stack	**stack_a;
	t_stack	**stack_b;

	if (argc == 1)
		return (0);
	stack_a = getlist(argc, argv);
	stack_b = malloc(sizeof(t_stack *));
	if (!stack_a || !stack_b)
		return (free(stack_b), write(2, "Error\n", 6));
	*stack_b = NULL;
	ft_sort(stack_a, stack_b);
	if (*stack_a)
		ft_dlstclear(stack_a);
	if (*stack_b)
		ft_dlstclear(stack_b);
	free(stack_b);
	return (0);
}
