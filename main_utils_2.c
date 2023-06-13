/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:09:41 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/13 20:31:28 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	size_check(int ac, char **av)
{
	int	i;
	int	size;
	int	*result;

	size = 0;
	while (av[size])
		size++;
	result = (int *)malloc(sizeof(int) * size);
	if (!result)
		return (NULL);
	i = 0;
	while ()
}