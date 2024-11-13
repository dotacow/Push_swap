/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:33:46 by yokitane          #+#    #+#             */
/*   Updated: 2024/11/09 14:57:39 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// install visualizer
// work on checker (bonus)
//--------------------
// work on algorithim (jordanian alg)
// init b (pb x2)
// get cheapest number to push to b such that b is sorted in reverse
//
// repeat until largest is left in stack a || sorted || 3 left
// push all back to a
// 	if smallest/largest value, pb
//	if cheapest requires rotations, calculate on both stacks
//		execute rrr/rr to save stack unique rotations
//	ra ra ra rb rb--> rr rr ra
//-------------------
//	cheapest num to pb
//		//num to be pushed is etiher min or max of stack_b
//		//current head_a is neither,
//			//if we push, how many moves till stack_b is sorted
//		//
//
//
//-------------------
// stuff to build:
// find_cheapest(things to consider)
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
