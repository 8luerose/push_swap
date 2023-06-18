/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rose <rose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 20:15:32 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/19 01:42:26 by rose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	a_to_b(t_deque *a, t_deque *b, int chunk, int i)
{
	int	data;
	int pos;

	while (a->size != 0)
	{
		//pos = 0;
		data = a->front->data;

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
			if (chunk_rotate(a, i + chunk) > 0)
				ra(a);
			else
				rra(a);
			//pos++;
		}
	}
}

int	chunk_rotate(t_deque *deque, int chunk_value)
{
	t_node	*p;
	int		i;

	i = 0;
	p = deque->front;
	while (p->data > chunk_value)
	{
		p = p->next;
		i++;
	}
	if (i <= deque->size / 2)
		return (1);
	return (-1);
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
