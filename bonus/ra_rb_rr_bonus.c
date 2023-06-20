/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 19:36:01 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/20 16:42:48 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ra_bonus(t_deque *deque_a)
{
	int	node_data;

	if (deque_a->size > 1)
	{
		node_data = find_data_front(deque_a);
		pop_front(deque_a);
		push_back(deque_a, node_data);
	}
}

void	rb_bonus(t_deque *deque_b)
{
	int	node_data;

	if (deque_b->size > 1)
	{
		node_data = find_data_front(deque_b);
		pop_front(deque_b);
		push_back(deque_b, node_data);
	}
}

void	rr_bonus(t_deque *deque_a, t_deque *deque_b)
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
}
