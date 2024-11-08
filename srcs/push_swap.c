/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:33:46 by yokitane          #+#    #+#             */
/*   Updated: 2024/11/08 11:52:17 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// install visualizer
// work on checker (bonus)
//--------------------
// work on algorithim (jordanian alg)
// init b (pb x2)
// get cheapest number to push to b such that b is sorted in reverse
// repeat until largest is left in stack a || sorted || 3 left
// push all back to a
//-------------------
// research:
	//
//-------------------
// stuff to build:
// find_cheapest(things to consider)
	//cheapest to move to head
	//n operations post push such that b is sorted in reverse
	// n = 1
	//once you get cheapest
		//if cheapest is min of b
		//if cheapest is max of b
		//everything else
// push_cheapest
// insert_index

int	main(int argc, char **argv)
{
	t_stack	**stack_a;
	t_stack	**stack_b;

	if (argc == 1)
		return (0);
	stack_a = getlist(argc, argv);
	stack_b = malloc(sizeof(t_stack *));
	if (!stack_a || !stack_b)
		return (1,write(2, "Error\n", 6));
	*stack_b = NULL;
	ft_sort(stack_a, stack_b);
	if (*stack_a)
		ft_ilstclear(stack_a);
	if (*stack_b)
		ft_ilstclear(stack_b);
	free(stack_b);
	return (0);
}
