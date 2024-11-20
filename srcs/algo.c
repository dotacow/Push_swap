/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 11:01:03 by yokitane          #+#    #+#             */
/*   Updated: 2024/11/20 13:27:30 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"


void	rotate_to_top(t_stack **stack, int index)
{
	if (index <= ft_ilstsize(*stack) / 2)
	{
		while (index--)
			ft_ra(stack);
	}
	else
	{
		index = ft_ilstsize(*stack) - index;
		while (index--)
			ft_rra(stack);
	}
}