/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 20:03:27 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/20 16:42:53 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	rra_bonus(t_deque *deque_a)
{
	int	node_data;

	if (deque_a->size > 1)
	{
		node_data = find_data_back(deque_a);
		pop_back(deque_a);
		push_front(deque_a, node_data);
	}
}

void	rrb_bonus(t_deque *deque_b)
{
	int	node_data;

	if (deque_b->size > 1)
	{
		node_data = find_data_back(deque_b);
		pop_back(deque_b);
		push_front(deque_b, node_data);
	}
}

void	rrr_bonus(t_deque *deque_a, t_deque *deque_b)
{
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
}
