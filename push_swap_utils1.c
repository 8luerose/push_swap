/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 20:15:32 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/17 19:27:04 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	a_to_b(t_deque *a, t_deque *b, int chunk, int i)
{
	int	data;

	while (a->size != 0)
	{
		data = find_data_front(a);
		if (data <= i)
		{
			pb(a, b);
			i++;
		}
		else if ((data > i) && (data <= i + chunk))
		{
			pb(a, b);
			rb(b);
			i++;
		}
		else if (data > (i + chunk))
		{
			if (i >= 0 && (i < (a->size / 2)))
				rra(a);
			else
				ra(a);
		}
	}
}

int	max_location(t_deque *b, int max)
{
	t_node	*p;
	int		i;

	p = b->front;
	i = 0;
	while (p->data != max)
	{
		p = p->next;
		i++;
	}
	if (i <= b->size / 2)
		return (1);
	else
		return (-1);
}

void	b_to_a(t_deque *a, t_deque *b, int max)
{
	while (b->size != 0)
	{
		if (max_location(b, max) > 0)
		{
			while (b->front->data != max)
				rb(b);
		}
		else
		{
			while (b->front->data != max)
				rrb(b);
		}
		pa(a, b);
		max--;
	}
}
