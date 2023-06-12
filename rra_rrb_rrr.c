/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 20:03:27 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/12 20:30:15 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_deque *deque_a)
{
	int	node_data;

	if (deque_a->size > 1)
	{
		node_data = find_node_back(deque_a);
		pop_back(deque_a);
		push_front(deque_a, node_data);
	}
}
// void	rra(t_deque *deque_a)
// {
// 	t_node	*p;

// 	if (deque_a->size > 1)
// 	{
// 		p = deque_a->back;
// 		deque_a->back = deque_a->back->prev;
// 		deque_a->back->next = NULL;
// 		p->prev = NULL;
// 		p->next = deque_a->front;
// 		deque_a->front->prev = p;
// 		deque_a->front = p;
// 	}
// }

void	rrb(t_deque *deque_b)
{
	rra(deque_b);
}

void	rrr(t_deque *deque_a, t_deque *deque_b)
{
	rra(deque_a);
	rrb(deque_b);
}
