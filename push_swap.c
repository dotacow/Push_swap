/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 17:33:46 by yokitane          #+#    #+#             */
/*   Updated: 2024/10/28 12:03:23 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// build the sa,sb,sss,ra,rb,rr,rra,rrb,rrr
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
	ft_ilstprint(*stack_a);
	// b = NULL;
	// sort(a, b);
	return (0);
}
