/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus_utils.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 20:35:30 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/19 20:36:16 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_putstr(char *s)
{
	int	len;

	while (s[len])
		len++;
	if (!s)
		return ;
	write (1, s, len);
}

void	is_sorted(t_deque *deque_a)
{
	int	i;
	int	j;
	int	tmp;
	int	cnt;

	i = 0;
	cnt = 0;
	while (i < deque_a->size)
	{
		j = 0;
		while (j < deque_a->size - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				cnt++;
			}
			j++;
		}
		i++;
	}
	if (check_duplicaton(arr, deque_a) == 1)
		print_error();
	if (cnt == 0)
		exit(1);
}