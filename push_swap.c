/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:33:46 by yokitane          #+#    #+#             */
/*   Updated: 2024/10/31 18:42:46 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//handle 5 nums and below
	//2 /3 /4 /5
//insertion sort
// work on algorithim
int	main(int argc, char **argv)
{
	t_ilist	**stack_a;

	// t_ilist	**b;
	if (argc == 1)
		return (0);
	stack_a = getlist(argc, argv);
	if (!stack_a)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	ft_sa(stack_a);
	ft_ra(stack_a);
	ft_ilstprint(*stack_a);
	ft_ilstclear(stack_a);
	// b = NULL;
	// sort(a, b);
	return (0);
}
