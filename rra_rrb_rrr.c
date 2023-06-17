/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rose <rose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 20:03:27 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/18 05:25:33 by rose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_deque *deque_a)
{
	int	node_data;

	if (deque_a->size > 1)
	{
		node_data = find_data_back(deque_a);
		pop_back(deque_a);
		push_front(deque_a, node_data);
	}
	write (1, "rra\n", 4);
}

void	rrb(t_deque *deque_b)
{
	//rra(deque_b);
	int	node_data;

	if (deque_b->size > 1)
	{
		node_data = find_data_back(deque_b);
		pop_back(deque_b);
		push_front(deque_b, node_data);
	}
	write (1, "rrb\n", 4);
}

void	rrr(t_deque *deque_a, t_deque *deque_b)
{
	// rra(deque_a);
	// rrb(deque_b);
	int	node_data;

	if (deque_a->size > 1)
	{
		node_data = find_data_back(deque_a);
		pop_back(deque_a);
		push_front(deque_a, node_data);
	}
	if (deque_b->size > 1)
	{
		node_data = find_data_back(deque_b);
		pop_back(deque_b);
		push_front(deque_b, node_data);
	}
	write (1, "rrr\n", 4);
}
