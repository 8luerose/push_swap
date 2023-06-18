/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rose <rose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 18:18:12 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/19 01:34:32 by rose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	push_swap(deque_a, deque_b);
	free_deque(deque_a);
	free_deque(deque_b);
	return (0);
}
