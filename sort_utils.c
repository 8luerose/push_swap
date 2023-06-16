/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 19:04:50 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/16 20:07:14 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_max(t_deque *deque)
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
	}
	return (max);
}

static int	ft_min(t_deque *deque)
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
	int	max;

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

void	sort_5(t_deque *deque)
{
	int	max;
	int	min;

	if (deque->size < 2)
		return ;
	max = ft_max(deque);
	min = ft_min(deque);
	if (deque->size == 3)
		sort_3(deque);
	else
	{
		while (deque->size > 3)
		{
			if (find_data_front(deque) == max || find_data_front(deque) == min)
				ra(deque);
			else
				pb(deque, deque);
		}
		sort_3(deque);
		while (deque->size < 5)
			pa(deque, deque);
	}
}

//3 1 2 -> 1 2 3
//3 2 1 -> 2 1 3 -> 1 2 3
//1 3 2 -> 2 1 3 -> 1 2 3
//1 2 3
//2 1 3 -> 1 2 3
//2 3 1 -> 1 2 3
