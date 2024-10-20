/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getlist.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dotacow <dotacow@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 12:12:29 by dotacow           #+#    #+#             */
/*   Updated: 2024/10/20 13:22:10 by dotacow          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include	<stdlib.h>

static char	strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		c;

	s = malloc(sizeof(strs));
	if (!s)
		return (NULL);
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			s[c++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != size - 1)
			s[c++] = sep[j++];
		i++;
	}
	s[c] = '\0';
	return (s);
}
static char	**parsestr(int	size, char	**argv)
{
	char	*joined;
	char	**split;

	joined = strjoin(size, argv, ' ');
	if (!joined)
		return (NULL);
	split = ft_split(joined, ' ');
	free (joined);
	if (!split)
		return (NULL);
	return (split);

}
intstack	*getlist(int argc, char **argv)
{
	char	**strs;
	int		size;
	int		i;
	intstack	*stack;

	size = argc - 1;
	strs = parsestr(size, argv + 1);
	i = 0;
	while (strs[i])
	{
		stack->num = ft_atoi(strs[i]);
		
		i++;
		stack = stack->next;
	}

}
