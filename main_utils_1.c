/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 19:31:35 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/14 20:35:42 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*split_to_atoi(int ac, char **av, t_deque *deque_a)
{
	int		i;
	int		j;
	int		k;
	char	**str;
	int		*result;

	i = 0;
	while (++i < ac)
	{
		str = ft_split(av[i], ' ');
		if (!str)
			return (NULL);
		j = -1;
		while (str[++j])
			push_back(deque_a, ft_atoi(str[j]));
	}
	result = making_arr(deque_a);
	return (result);
}

int	*making_arr(t_deque *deque_a)
{
	int		*result;
	int		cnt;
	t_node	*p;

	p = deque_a->front;
	result = (int *)malloc(sizeof(int) * deque_a->size);
	if (!result)
		return (NULL);
	cnt = 0;
	while (cnt < deque_a->size)
	{
		result[cnt] = p->data;
		cnt++;
		p = p->next;
	}
	return (result);
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
		if (arr[i] == arr[i + 1])
			print_error();
		i++;
	}
	if (cnt == 0)
		print_error();
}

void	indexing_list(int *arr, t_deque *deque_a)
{
	int		j;
	t_node	*p;

// 1 2 3 4 5 6
	p = deque_a->front;
	while (p)
	{
		j = 0;
		while (j < deque_a->size)
		{
			if (arr[j] == p->data)
			{
				p->data = j;
				break ;
			}
			j++;
		}
		p = p->next;
	}
}
