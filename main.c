/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rose <rose@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 18:18:12 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/18 01:31:19 by rose             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		*arr;
	t_deque	*deque_a;
	t_deque	*deque_b;
	int		i;
	t_node	*p;

	if (ac < 2)
		print_error();
	deque_a = deque_init();
	deque_b = deque_init();
	arr = split_to_atoi(ac, av, deque_a);
	
	// i = -1;
	// while (++i < deque_a->size)
	// 	printf("%d ", arr[i]);
	// printf("--arr end--\n");

	check_sort(arr, deque_a, 0);

	// i = -1;
	// while (++i < deque_a->size)
	// 	printf("%d ", arr[i]);
	// printf("--sort arr end--\n");

	indexing_list(arr, deque_a);

	// p = deque_a->front;
	// while (p)
	// {
	// 	printf("%d ", p->data);
	// 	p = p->next;
	// }
	// printf("--deque end--\n");
	
	//sort_3(deque_a);
	//sort_5(deque_a, deque_b);
	push_swap(deque_a, deque_b);

	return (0);
}
