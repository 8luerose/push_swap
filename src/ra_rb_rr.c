/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rose <rose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 19:36:01 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/19 01:42:36 by rose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_deque *deque_a)
{
	int	node_data;

	if (deque_a->size > 1)
	{
		node_data = find_data_front(deque_a);
		pop_front(deque_a);
		push_back(deque_a, node_data);
	}
	write (1, "ra\n", 3);
}

void	rb(t_deque *deque_b)
{
	int	node_data;

	if (deque_b->size > 1)
	{
		node_data = find_data_front(deque_b);
		pop_front(deque_b);
		push_back(deque_b, node_data);
	}
	write (1, "rb\n", 3);
}

void	rr(t_deque *deque_a, t_deque *deque_b)
{
	int	node_data;

	if (deque_a->size > 1)
	{
		node_data = find_data_front(deque_a);
		pop_front(deque_a);
		push_back(deque_a, node_data);
	}
	if (deque_b->size > 1)
	{
		node_data = find_data_front(deque_b);
		pop_front(deque_b);
		push_back(deque_b, node_data);
	}
	write (1, "rr\n", 3);
}
