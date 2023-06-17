/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:10:39 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/17 19:19:44 by taehkwon         ###   ########.fr       */
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
	sa(deque_b);
	write (1, "sb\n", 3);
}

void	ss(t_deque *deque_a, t_deque *deque_b)
{
	sa(deque_a);
	sb(deque_b);
	write (1, "ss\n", 3);
}
