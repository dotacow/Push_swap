/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_helpers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:23:49 by yokitane          #+#    #+#             */
/*   Updated: 2024/11/14 16:41:16 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// this frees the 2d str after we are get the list from it
void	ft_free(char **words)
{
	int	i;

	i = 0;
	while (words[i])
	{
		free(words[i]);
		i++;
	}
	free(words);
}

void	ft_perror(char *str, t_stack **stack_a, t_stack **stack_b)
{
	ft_putstr_fd(str, 2);
	if (stack_a)
		ft_dlstclear(stack_a);
	if (stack_b)
		ft_dlstclear(stack_b);
	exit(1);
}

void	ft_dlstclear(t_stack **lst)
{
	t_stack	*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		free(*lst);
		*lst = tmp;
	}
	free(lst);
}
