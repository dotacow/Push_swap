/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getlist.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 12:12:29 by dotacow           #+#    #+#             */
/*   Updated: 2024/10/27 20:33:29 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	checkinvalid(char **strs)
{
	int	i;
	int	j;

	i = 0;
	while (strs[i])
	{
		j = 0;
		while (strs[i][j])
		{
			if (!ft_isdigit(strs[i][j]))
				if (strs[i][j] != '-' && strs[i][j] != '+')
					return (1);
			j++;
		}
		i++;
	}
	return (0);
}
static int	checkdup(char **strs)
{
	int	i;
	int	j;

	i = 0;
	while (strs[i])
	{
		j = i + 1;
		while (strs[j])
		{
			if (ft_strncmp(strs[i], strs[j], 11) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static char	*strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		k;

	j = ft_getlen(size, strs, sep);
	if (!((s = malloc (j + 1))))
		return (NULL);
	k = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			s[k++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
				s[k++] = sep[j++];
		}
		i++;
	}
	return (s[k] = 0, s);
}

static char	**parsestr(int size, char **argv)
{
	char	*joined;
	char	**split;

	joined = strjoin(size, argv, " ");
	if (!joined)
		return (NULL);
	split = ft_split(joined, ' ');
	free(joined);
	if (!split)
		return (NULL);
	return (split);
}

t_ilist	**getlist(int argc, char **argv)
{
	char	**strs;
	int	i;
	t_ilist	**head;
	t_ilist	*temp;

	strs = parsestr(--argc, argv + 1);
	if (!strs || checkinvalid(strs) || checkdup(strs))
		return (free(strs), NULL);
	i = 0;
	head = malloc(sizeof(t_ilist *));
	while (strs[i])
	{
		temp = ft_ilstnew(ft_atoi(strs[i]));
		if (i == 0)
			*head = temp;
		if (!temp)
		{
			ft_ilstclear(head);
			return (free(strs), NULL);
		}
		ft_ilstadd_back(head, temp);
		i++;
	}
	return (free(strs), head);
}
