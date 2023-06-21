/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 20:35:30 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/21 15:35:31 by taehkwon         ###   ########.fr       */
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

int	is_sorted(t_deque *deque_a)
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
	return (1);
}
