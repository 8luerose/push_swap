/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rose <rose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 20:11:16 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/18 06:09:06 by rose             ###   ########.fr       */
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
		chunk = (deque_a->size / 5);
		max = ft_max(deque_a);
		min = ft_min(deque_a);
		i = min;
		while (i < max - chunk)
		{
			a_to_b(deque_a, deque_b, chunk, i);
			i += chunk;
		}
		a_to_b(deque_a, deque_b, chunk, i);
		push_swap(deque_a, deque_b);
		b_to_a(deque_a, deque_b, max);
	}
}
