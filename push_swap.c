/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:33:46 by yokitane          #+#    #+#             */
/*   Updated: 2024/11/01 12:12:49 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//handle 5 nums and below
	//2 /3 /4 /5
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
	*stack_b = NULL;
	if (!stack_a || !stack_b)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	ft_printf("stack a:\n");
	ft_pb(stack_a, stack_b);
	ft_pa(stack_a, stack_b);
	ft_ilstprint(*stack_b);
	if (*stack_a)
		ft_ilstclear(stack_a);
	if (*stack_b)
		ft_ilstclear(stack_b);
	free(stack_b);
	return (0);
}
