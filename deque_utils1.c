/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_utils1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 20:06:12 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/05 20:39:59 by taehkwon         ###   ########.fr       */
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
	t_node	*node;
	node = (t_node *)malloc(sizeof(t_node));
	
    node->data = data;
    node->prev = NULL;
    node->next = deque->front;

    if (deque->front != NULL)
        deque->front->prev = node;
    else
        deque->back = node;

    deque->front = node;
    deque->size++;
}

void push_back(t_deque *deque, int data) {
    t_node *node = (t_node*)malloc(sizeof(t_node));
    node->data = data;
    node->next = NULL;
    node->prev = deque->back;

    if (deque->back != NULL)
        deque->back->next = node;
    else
        deque->front = node;

    deque->back = node;
    deque->size++;
}

int pop_front(t_deque *deque) {
    if (deque->size == 0) {
        return -1; // or some kind of error
    }

    t_node *temp = deque->front;
    int data = temp->data;
    
    deque->front = deque->front->next;
    if (deque->front != NULL)
        deque->front->prev = NULL;
    else
        deque->back = NULL;

    free(temp);
    deque->size--;
    return data;
}

int pop_back(t_deque *deque) {
    if (deque->size == 0) {
        return -1; // or some kind of error
    }

    t_node *temp = deque->back;
    int data = temp->data;

    deque->back = deque->back->prev;
    if (deque->back != NULL)
        deque->back->next = NULL;
    else
        deque->front = NULL;

    free(temp);
    deque->size--;
    return data;
}