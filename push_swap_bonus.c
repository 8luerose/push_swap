/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 19:54:58 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/19 20:38:31 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	checker_comand(t_deque *deque_a, t_deque *deque_b, char *line, int n)
{
	if (ft_strncmp(line, "ra", n) == 0)
		ra(deque_a);
	else if (ft_strncmp(line, "rb", n) == 0)
		rb(deque_b);
	else if (ft_strncmp(line, "rr", n) == 0)
		rr(deque_a, deque_b);
	else if (ft_strncmp(line, "pa", n) == 0)
		pa(deque_a, deque_b);
	else if (ft_strncmp(line, "pb", n) == 0)
		pb(deque_a, deque_b);
	else if (ft_strncmp(line, "rra", n == 0))
		rra(deque_a);
	else if (ft_strncmp(line, "rrb", n == 0))
		rrb(deque_b);
	else if (ft_strncmp(line, "rrr", n == 0))
		rrr(deque_a, deque_b);
	else if (ft_strncmp(line, "sa", n) == 0)
		sa(deque_a);
	else if (ft_strncmp(line, "sb", n) == 0)
		sb(deque_b);
	else if (ft_strncmp(line, "ss", n) == 0)
		ss(deque_a, deque_b);
	else
		print_error();
}


void	checker(t_deque *deque_a, t_deque *deque_b)
{
	char	*line;
	int		i;

	line = get_next_line(0);
	while (line)
	{
		checker_comand(deque_a, deque_b, line, BUFFER_SIZE + 1);
		free(line);
		line = get_next_line(0);
	}
	if (line)
		free(line);
	if (is_sort(deque_a))
		return (ft_putstr("OK\n"));
	else
		return (ft_putstr("KO\n"));
}
