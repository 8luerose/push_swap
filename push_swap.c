/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 20:11:16 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/17 19:44:19 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_deque *a, t_deque *b)
{
	int	chunk;
	int	data_size;

	data_size = a->size;
	chunk = (data_size / 10) * 5 + 7;
	a_to_b(a, b, chunk, 1);
	b_to_a(a, b, data_size - 1);
}
