/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_utils2_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 20:06:12 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/20 16:41:55 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	find_data_front(t_deque *deque)
{
	int	temp;

	temp = deque->front->data;
	return (temp);
}

int	find_data_back(t_deque *deque)
{
	int	temp;

	temp = deque->back->data;
	return (temp);
}

void	free_deque(t_deque *deque)
{
	t_node	*p;
	t_node	*tmp;

	if (!deque)
		return ;
	p = deque->front;
	while (p)
	{
		tmp = p->next;
		free(p);
		p = tmp;
	}
	free(deque);
}

void	print_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}
