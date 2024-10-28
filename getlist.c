/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getlist.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 12:12:29 by dotacow           #+#    #+#             */
/*   Updated: 2024/10/28 13:56:12 by yokitane         ###   ########.fr       */
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
	long int	num[501];

	i = 0;
	while(i < 501)
		num[i++] = 0;
	i = 0;
	while (strs[i])
	{
		num[i] = ft_atoi(strs[i]);
		i++;
	}
	i = 0;
	while (strs[i])
	{
		j = i + 1;
		while (strs[j])
		{
			if (num[i] == num[j] || num[j] > __INT_MAX__ || num[j] < -2147483648)
				return (1);
			j++;
		}
		i++;
	}
	// while (strs[i])
	// {
	// 	j = i + 1;
	// 	while (strs[j])
	// 	{
	// 		if (ft_strncmp(strs[i], strs[j], 11) == 0)
	// 			return (1);
	// 		j++;
	// 	}
	// 	i++;
	// }
	return (0);
}

static char	*strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		i;
	int		j;
	int		k;

	j = ft_getlen(size, strs, sep);
	s = malloc(j + 1);
	if (!s)
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
	int		i;
	t_ilist	**head;
	t_ilist	*temp;

	strs = parsestr(--argc, argv + 1);
	if (!strs || checkinvalid(strs) || checkdup(strs))
		return (free(strs), NULL);
	i = 0;
	head = malloc(sizeof(t_ilist *));
	if (!head)
		return (NULL);
	while (strs[i])
	{
		temp = ft_ilstnew(ft_atoi(strs[i]));
		if (i == 0)
			*head = temp;
		if (!temp)
			return (ft_ilstclear(head), free(strs), NULL);
		ft_ilstadd_back(head, temp);
		i++;
	}
	return (free(strs), head);
}
