/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:10:39 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/20 16:42:57 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	sa_bonus(t_deque *deque_a)
{
	int	tmp;

	if (deque_a->size > 1)
	{
		tmp = deque_a->front->data;
		deque_a->front->data = deque_a->front->next->data;
		deque_a->front->next->data = tmp;
	}
}

void	sb_bonus(t_deque *deque_b)
{
	int	tmp;

	if (deque_b->size > 1)
	{
		tmp = deque_b->front->data;
		deque_b->front->data = deque_b->front->next->data;
		deque_b->front->next->data = tmp;
	}
}

void	ss_bonus(t_deque *deque_a, t_deque *deque_b)
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
}
