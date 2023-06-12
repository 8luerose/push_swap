/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:10:39 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/12 20:30:15 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_deque *deque_a)
{
	int	*tmp;

	if (deque_a->size > 1)
	{
		tmp = deque_a->front->data;
		deque_a->front->data = deque_a->front->next->data;
		deque_a->front->next->data = tmp;
	}
}

void	sb(t_deque *deque_b)
{
	sa(deque_b);
}

void	ss(t_deque *deque_a, t_deque *deque_b)
{
	sa(deque_a);
	sb(deque_b);
}
