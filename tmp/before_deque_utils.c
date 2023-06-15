/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   before_deque_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 19:44:24 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/14 20:35:34 by taehkwon         ###   ########.fr       */
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

void	push_front(t_deque *d, int data)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		exit(1);
	new_node->data = data;
	new_node->prev = NULL;
	new_node->next = d->front;
	if (d->front == NULL)
		d->back = new_node;
	else
		d->front->prev = new_node;
	d->front = new_node;
	d->size += 1;
}

void	push_back(t_deque *d, int data)
{
	t_node	*new_node;

	new_node = (t_node *)malloc(sizeof(t_node));
	if (!new_node)
		exit(1);
	new_node->data = data;
	new_node->prev = d->back;
	new_node->next = NULL;
	if (d->back == NULL)
		d->front = new_node;
	else
		d->back->next = new_node;
	d->back = new_node;
	d->size += 1;
}

void	pop_front(t_deque *d)
{
	t_node	*node;

	if (d->size == 0)
		return ;
	node = d->front;
	d->front = node->next;
	if (!d->front)
		d->back = NULL;
	else
		d->front->prev = NULL;
	free (node);
}
//1.return(front) 따로 만들어줘야 함 -> 2.pop_front 순서
