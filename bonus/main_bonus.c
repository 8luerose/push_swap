/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 21:27:21 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/19 21:48:31 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

int	main(int ac, char **av)
{
	int		*arr;
	t_deque	*deque_a;
	t_deque	*deque_b;

	if (ac < 2)
		print_error();
	deque_a = deque_init();
	deque_b = deque_init();
	arr = split_to_atoi(ac, av, deque_a);
	check_sort(arr, deque_a, 0);
	indexing_list(arr, deque_a);
	checker(arr, deque_a, deque_b);
	free_deque(deque_a);
	free_deque(deque_b);
	free(arr);
	return (0);
}
