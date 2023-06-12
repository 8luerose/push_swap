/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_utils1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 20:06:12 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/12 20:30:18 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_deque	*deque_init(void)
{
	t_deque	*deque;

	deque = (t_deque *)malloc(sizeof(t_deque));
	deque->size = 0;
	deque->front = NULL;
	deque->back = NULL;
	return (deque);
}

void	push_front(t_deque *deque, int data)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	new_node->data = data;
	new_node->prev = NULL;
	new_node->next = deque->front;
	if (deque->front != NULL)
		deque->front->prev = new_node;
	else
		deque->back = new_node;
	deque->front = new_node;
	deque->size++;
}

void	push_back(t_deque *deque, int data)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	new_node->data = data;
	new_node->next = NULL;
	new_node->prev = deque->back;
	if (deque->back != NULL)
		deque->back->next = new_node;
	else
		deque->front = new_node;
	deque->back = new_node;
	deque->size++;
}

void	pop_front(t_deque *deque)
{
	t_node	*temp;
	int		data;

	if (deque->size == 0)
		return ;
	temp = deque->front;
	data = deque->front->data;
	deque->front = deque->front->next;
	if (deque->front != NULL)
		deque->front->prev = NULL;
	else
		deque->back = NULL;
	free(temp);
	deque->size--;
}

void	pop_back(t_deque *deque)
{
	t_node	*temp;
	int		data;

	if (deque->size == 0)
		return ;
	temp = deque->back;
	data = deque->back->data;
	deque->back = deque->back->prev;
	if (deque->back != NULL)
		deque->back->next = NULL;
	else
		deque->front = NULL;
	free(temp);
	deque->size--;
}
