/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:33:46 by yokitane          #+#    #+#             */
/*   Updated: 2024/11/20 13:23:08 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// push_swap
// 	work on checker (bonus)
//--------------------
// work on algorithim
//  (three way quick sort)
//  treat each end as a partition
// keep splitting the partitions until the partitions are sorted
//-------------------
// tbd:
// incorporate ft_strlen into error checking
// the algorithim itself (:
// exit function that writes on given fd and frees all malloc'd memory
// is_empty()
int	main(int argc, char **argv)
{
	t_stack	**stack_a;
	t_stack	**stack_b;

	if (argc == 1)
		return (0);
	stack_a = getlist(argc, argv);
	stack_b = malloc(sizeof(t_stack *));
	if (!stack_a || !stack_b)
		ft_perror("Error\n", 2, stack_a, stack_b);
	*stack_b = NULL;
	ft_sort(stack_a, stack_b);
	if (*stack_a)
		ft_dlstclear(stack_a);
	if (*stack_b)
		ft_dlstclear(stack_b);
	free(stack_b);
	return (0);
}
