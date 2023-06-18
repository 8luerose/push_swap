/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:04:50 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/18 16:33:03 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_index(t_deque *deque, int data)
{
	int		index;
	t_node	*p;

	p = deque->front;
	index = 0;
	while (p)
	{
		if (p->data == data)
			return (index);
		p = p->next;
		index++;
	}
	return (-1);
}

int	ft_max(t_deque *deque)
{
	int		max;
	t_node	*p;

	if (!deque)
		print_error();
	p = deque->front;
	max = -2147483648;
	while (p)
	{
		if (p->data > max)
			max = p->data;
		p = p->next;
		//printf("***%d\n", max);
	}
	return (max);
}

int	ft_min(t_deque *deque)
{
	int		min;
	t_node	*p;

	if (!deque)
		print_error();
	p = deque->front;
	min = 2147483647;
	while (p)
	{
		if (p->data < min)
			min = p->data;
		p = p->next;
	}
	return (min);
}

void	sort_3(t_deque *deque)
{
	int		max;

	if (deque->size < 2)
		return ;
	max = ft_max(deque);
	if (find_data_front(deque) == max)
		ra(deque);
	if (deque->front->next->next)
	{
		if (deque->front->next->data > deque->front->next->next->data)
			rra(deque);
		if (find_data_front(deque) > deque->front->next->data)
			sa(deque);
	}
}

void	sort_5(t_deque *deque_a, t_deque *deque_b)
{
	int		min;
	int		mid;
	int		idx;

	while (deque_a->size > 3)
	{
		mid = deque_a->size / 2;
		min = ft_min(deque_a);
		idx = find_index(deque_a, min);
		if (idx + 1 == deque_a->size - 1)
			sa(deque_a);
		while (find_data_front(deque_a) != min)
		{
			if (mid < idx)
				rra(deque_a);
			else
				ra(deque_a);
		}
		pb(deque_a, deque_b);
	}
	sort_3(deque_a);
	while (deque_b->front)
		pa(deque_a, deque_b);
}




//3 1 2 -> 1 2 3
//3 2 1 -> 2 1 3 -> 1 2 3
//1 3 2 -> 2 1 3 -> 1 2 3
//1 2 3
//2 1 3 -> 1 2 3
//2 3 1 -> 1 2 3
