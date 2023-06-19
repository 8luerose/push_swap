/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 19:54:58 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/19 21:48:11 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	checker_comand(t_deque *deque_a, t_deque *deque_b, char *line)
{
	if (ft_strcmp(line, "ra\n") == 0)
		ra_bonus(deque_a);
	else if (ft_strcmp(line, "rb\n") == 0)
		rb_bonus(deque_b);
	else if (ft_strcmp(line, "rr\n") == 0)
		rr_bonus(deque_a, deque_b);
	else if (ft_strcmp(line, "pa\n") == 0)
		pa_bonus(deque_a, deque_b);
	else if (ft_strcmp(line, "pb\n") == 0)
		pb_bonus(deque_a, deque_b);
	else if (ft_strcmp(line, "rra\n") == 0)
		rra_bonus(deque_a);
	else if (ft_strcmp(line, "rrb\n") == 0)
		rrb_bonus(deque_b);
	else if (ft_strcmp(line, "rrr\n") == 0)
		rrr_bonus(deque_a, deque_b);
	else if (ft_strcmp(line, "sa\n") == 0)
		sa_bonus(deque_a);
	else if (ft_strcmp(line, "sb\n") == 0)
		sb_bonus(deque_b);
	else if (ft_strcmp(line, "ss\n") == 0)
		ss_bonus(deque_a, deque_b);
	else
		print_error();
}

void	checker(int *arr, t_deque *deque_a, t_deque *deque_b)
{
	char	*line;
	int		i;

	line = get_next_line(0);
	while (line)
	{
		checker_comand(deque_a, deque_b, line);
		free(line);
		line = get_next_line(0);
	}
	if (line)
		free(line);
	if (is_sort(arr, deque_a))
		return (ft_putstr("OK\n"));
	else
		return (ft_putstr("KO\n"));
	free_deque(deque_a);
	free_deque(deque_b);
}
