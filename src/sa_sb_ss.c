/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rose <rose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:10:39 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/19 01:42:52 by rose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_deque *deque_a)
{
	int	tmp;

	if (deque_a->size > 1)
	{
		tmp = deque_a->front->data;
		deque_a->front->data = deque_a->front->next->data;
		deque_a->front->next->data = tmp;
	}
	write (1, "sa\n", 3);
}

void	sb(t_deque *deque_b)
{
	int	tmp;

	if (deque_b->size > 1)
	{
		tmp = deque_b->front->data;
		deque_b->front->data = deque_b->front->next->data;
		deque_b->front->next->data = tmp;
	}
	write (1, "sb\n", 3);
}

void	ss(t_deque *deque_a, t_deque *deque_b)
{
	int	tmp;

	if (deque_a->size > 1)
	{
		tmp = deque_a->front->data;
		deque_a->front->data = deque_a->front->next->data;
		deque_a->front->next->data = tmp;
	}
	if (deque_b->size > 1)
	{
		tmp = deque_b->front->data;
		deque_b->front->data = deque_b->front->next->data;
		deque_b->front->next->data = tmp;
	}
	write (1, "ss\n", 3);
}
