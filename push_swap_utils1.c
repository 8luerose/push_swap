/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 20:15:32 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/18 21:02:32 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	a_to_b(t_deque *a, t_deque *b, int chunk, int i)
{
	int	data;
	int pos;

	while (a->size != 0)
	{
		pos = 0;
		data = a->front->data;  // save the data at the front of deque_a

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
			// determine the direction of rotation based on the current position of data
			if (search_fit_rank(a, i + chunk) > 0)
				ra(a);
			else
				rra(a);
			pos++;  // increase the current position of data
		}
		// else if (data > (i + chunk))
		// {
		// 	// determine the direction of rotation based on the current position of data
		// 	if (pos < a->size / 2)
		// 		ra(a);
		// 	else
		// 		rra(a);
		// 	pos++;  // increase the current position of data
		// }
	}
}

int	search_fit_rank(t_deque *a, int fit)
{
	t_node	*temp;
	int		i;

	i = 0;
	temp = a->front;
	while (temp->data > fit && ++i)
		temp = temp->next;
	if (i <= a->size / 2)
		return (1);
	return (-1);
}

/*
void	a_to_b(t_stack_data *a, t_stack_data *b, int chunk, int i)
{
	int	length;

	length = a->length - 1;
	while (a->length != 0)
	{
		if (get_top(a) <= i)
		{
			pb(a, b);
			i++;
		}
		else if (get_top(a) > i && get_top(a) <= i + chunk)
		{
			pb(a, b);
			rb(b);
			i++;
		}
		else if (get_top(a) > (i + chunk))
		{
			if (i < a->length / 2 && i >= 0)
				rra(a);
			else
				ra(a);
		}
		length--;
	}
}

*/

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
