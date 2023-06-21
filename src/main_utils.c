/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 19:31:35 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/21 14:33:21 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*split_to_atoi(int ac, char **av, t_deque *deque_a)
{
	int		i;
	int		j;
	char	**str;
	int		*result;

	i = 0;
	while (++i < ac)
	{
		str = ft_split(av[i], ' ');
		if (!str)
			return (NULL);
		if (*str == NULL)
			print_error();
		j = -1;
		while (str[++j])
		{
			if (!ft_strcmp(str[j], "-") || !ft_strcmp(str[j], "+"))
				print_error();
			push_back(deque_a, ft_atoi(str[j]));
		}
		free_split(str, j);
	}
	result = making_arr(deque_a);
	return (result);
}

int	*making_arr(t_deque *deque_a)
{
	int		*result;
	int		cnt;
	t_node	*p;

	result = (int *)malloc(sizeof(int) * deque_a->size);
	if (!result)
		return (NULL);
	p = deque_a->front;
	cnt = 0;
	while (cnt < deque_a->size)
	{
		result[cnt] = p->data;
		cnt++;
		p = p->next;
	}
	return (result);
}

int	check_duplicaton(int *arr, t_deque *deque_a)
{
	int	i;

	i = 0;
	while (i < deque_a->size - 1)
	{
		if (arr[i] == arr[i + 1])
			return (1);
		i++;
	}
	return (0);
}

void	check_sort(int *arr, t_deque *deque_a, int i)
{
	int	j;
	int	tmp;
	int	cnt;

	cnt = 0;
	while (i < deque_a->size)
	{
		j = 0;
		while (j < deque_a->size - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				cnt++;
			}
			j++;
		}
		i++;
	}
	if (check_duplicaton(arr, deque_a) == 1)
		print_error();
	if (cnt == 0)
		exit(1);
}

void	indexing_list(int *arr, t_deque *deque_a)
{
	int		i;
	t_node	*p;

	p = deque_a->front;
	while (p)
	{
		i = 0;
		while (i < deque_a->size)
		{
			if (arr[i] == p->data)
			{
				p->data = i;
				break ;
			}
			i++;
		}
		p = p->next;
	}
}
