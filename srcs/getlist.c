/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getlist.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yokitane <yokitane@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 12:12:29 by dotacow           #+#    #+#             */
/*   Updated: 2024/11/08 18:52:25 by yokitane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//checks for nonintegers/signs
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
//this function checks for duplicates and invalid inputs
static int	checkdup(char **strs)
{
	int			i;
	int			j;
	long long	*num;

	i = 0;
	while (strs[i])
		i++;
	num = malloc(sizeof(*num) * i);
	i = -1;
	while (strs[++i])
		num[i] = ft_atoi(strs[i]);
	i = -1;
	while (strs[++i])
	{
		if (num[i] > FTINTMAX || num[i] < FTINTMIN)
			return (free(num), 1);
		j = i + 1;
		while (strs[j])
		{
			if (num[i] == num[j])
				return (free(num), 1);
			j++;
		}
	}
	return (free(num), 0);
}
// piscine strjoin(slightly modified)
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
//this function combines split and strjoin to parse the input string
//after parsing, we get a 2d array of strings which is used to create the linked list
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
//this functions takes the argv, parses it and returns a stack.
t_stack **getlist(int argc, char **argv)
{
	char	**strs;
	int		i;
	t_stack **head;
	t_stack	*temp;

	strs = parsestr(--argc, argv + 1);
	if (!strs || checkinvalid(strs) || checkdup(strs))
		return (ft_free(strs), NULL);
	i = 0;
	head = malloc(sizeof(t_stack *));
	if (!head)
		return (NULL);
	while (strs[i])
	{
		temp = ft_ilstnew(ft_atoi(strs[i]));
		if (i == 0)
			*head = temp;
		if (!temp)
			return (ft_dlstclear(head), ft_free(strs), NULL);
		ft_ilstadd_back(head, temp);
		i++;
	}
	return (ft_free(strs), head);
}
