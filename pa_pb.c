/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:03:57 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/14 20:35:26 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_deque *deque_a, t_deque *deque_b)
{
	t_node	*p;

	if (deque_b->size > 0)
	{
		p = deque_b->front;
		deque_b->front = deque_b->front->next;
		if (deque_b->front)
			deque_b->front->prev = NULL;
		else
			deque_b->back = NULL;
		deque_b->size--;
		p->next = deque_a->front;
		if (deque_a->front)
			deque_a->front->prev = p;
		else
			deque_a->back = p;
		deque_a->front = p;
		deque_a->size++;
	}
}

void	pb(t_deque *deque_a, t_deque *deque_b)
{
	pa(deque_b, deque_a);
}
