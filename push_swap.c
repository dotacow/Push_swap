/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:33:46 by yokitane          #+#    #+#             */
/*   Updated: 2024/11/01 21:43:57 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//handle 5 nums and below
	//2 /3 /4 /5
// work on visualizer
//insertion sort
// work on algorithim (merge sort?)

int	main(int argc, char **argv)
{
	t_ilist	**stack_a;
	t_ilist	**stack_b;

	if (argc == 1)
		return (0);
	stack_a = getlist(argc, argv);
	stack_b = malloc(sizeof(t_ilist *));
	if (!stack_a || !stack_b)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	*stack_b = NULL;
	ft_sort(stack_a, stack_b);
	if(is_sorted(*stack_a))
		ft_printf("OK\n");
	ft_ilstprint(*stack_a);
	if (*stack_a)
		ft_ilstclear(stack_a);
	if (*stack_b)
		ft_ilstclear(stack_b);
	free(stack_b);
	return (0);
}
