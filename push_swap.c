/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 20:11:16 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/18 17:58:00 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_swap(t_deque *deque_a, t_deque *deque_b)
{
	int chunk;
	int max;
	int min;
	int i;

	if (deque_a->size <= 3)
		sort_3(deque_a);
	else if (deque_a->size <= 5)
		sort_5(deque_a, deque_b);
	else
	{
		//chunk = (deque_a->size / 5);
		chunk = (deque_a->size / 100) * 5 + 7;
		max = ft_max(deque_a);
		min = ft_min(deque_a);
		i = min;
		// while (i < max - chunk)
		// {
		// 	a_to_b(deque_a, deque_b, chunk, i);
		// 	i += 1;
		// }
		a_to_b(deque_a, deque_b, chunk, i);
		// push_swap(deque_a, deque_b);
		b_to_a(deque_a, deque_b, max);
	}
}
