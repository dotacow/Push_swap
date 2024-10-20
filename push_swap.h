/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dotacow <dotacow@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 10:41:27 by dotacow           #+#    #+#             */
/*   Updated: 2024/10/20 13:15:59 by dotacow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_intstack
{
	int	*num;
	struct s_intstack *next;
	struct s_intstack *prev;

} intstack;


# include "libft/libft.h"

intstack	*getlist(int argc, char **argv);

#endif