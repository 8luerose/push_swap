/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rose <rose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:03:57 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/18 05:22:50 by rose             ###   ########.fr       */
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
	write (1, "pa\n", 3);
}

void	pb(t_deque *deque_a, t_deque *deque_b)
{
	t_node	*p;

	if (deque_a->size > 0)
	{
		p = deque_a->front;
		deque_a->front = deque_a->front->next;
		if (deque_a->front)
			deque_a->front->prev = NULL;
		else
			deque_a->back = NULL;
		deque_a->size--;
		p->next = deque_b->front;
		if (deque_b->front)
			deque_b->front->prev = p;
		else
			deque_b->back = p;
		deque_b->front = p;
		deque_b->size++;
	}
	write (1, "pb\n", 3);
}
