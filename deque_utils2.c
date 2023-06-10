/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 20:06:12 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/10 19:21:25 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

// t_node	*search_front(t_deque *deque)
// {
// 	t_node	*temp;
// 	int		data;

// 	if (deque->size == 0)
// 		return ;
// 	temp = deque->front;
// 	data = deque->front->data;
// 	deque->front = deque->front->next;
// 	if (deque->front != NULL)
// 		deque->front->prev = NULL;
// 	else
// 		deque->back = NULL;
// 	free(temp);
// 	deque->size--;
// 	return (data);
// }
