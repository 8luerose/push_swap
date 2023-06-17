/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rose <rose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 20:06:12 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/18 06:22:50 by rose             ###   ########.fr       */
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

void	free_deque(t_deque *deque) 
{
    t_node *tmp;
    t_node *next;

    if (!deque) {
        return;
    }

    tmp = deque->front;

    while (tmp != NULL) {
        next = tmp->next;
        free(tmp);
        tmp = next;
    }

    free(deque);
}

void	print_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}
