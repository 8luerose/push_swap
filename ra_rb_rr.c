/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 19:36:01 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/12 20:30:14 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_deque *deque_a)
{
	int	node_data;

	if (deque_a->size > 1)
	{
		node_data = find_node_front(deque_a);
		pop_front(deque_a);
		push_back(deque_a, node_data);
	}
}

// void	ra(t_deque *deque_a)
// {
// 	t_node	*p;

// 	if (deque_a->size > 1)
// 	{
// 		p = deque_a->front;
// 		deque_a->front = deque_a->front->next;
// 		deque_a->front->prev = NULL;
// 		p->next = NULL;
// 		p->prev = deque_a->back;
// 		deque_a->back->next = p;
// 		deque_a->back = p;
// 	}
// }

void	rb(t_deque *deque_b)
{
	ra(deque_b);
}

void	rr(t_deque *deque_a, t_deque *deque_b)
{
	ra(deque_a);
	rb(deque_b);
}
