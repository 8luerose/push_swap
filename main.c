/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 18:18:12 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/12 20:30:12 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		i;
	int		j;
	int		*arr;
	t_deque	*deque_a;
	t_deque	*deque_b;
	char	**str;

	if (ac < 2)
		print_error();
	deque_a = deque_init();
	deque_b = deque_init();
	str = 

	i = 1;
	while (i < ac)
	{
		str = ft_split(av[i], ' ');
		j = 0;
		while (str[j])
		{
			
		}
	}
}
