/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 20:35:30 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/20 16:49:28 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_putstr(char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	if (!s)
		return ;
	write (1, s, len);
}

int	is_sorted(int *arr, t_deque *deque_a)
{
	int		i;
	t_node	*p;

	i = 0;
	p = deque_a->front;
	while (i < deque_a->size - 1)
	{
		if (p->data > p->next->data)
			return (0);
		p = p->next;
		i++;
	}
	if (check_duplicaton(arr, deque_a) == 1)
		print_error();
	return (1);
}
