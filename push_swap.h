/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:46:37 by taehkwon          #+#    #+#             */
/*   Updated: 2023/05/31 17:55:17 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_node
{
	struct s_node	*prev;
	int				data;
	struct s_node	*next;
}	t_node;

typedef struct s_deque
{
	int		*arr;
	int		size_a;
	int		size_b;
	t_node	*top_a;
	t_node	*top_b;
	t_node	*bottom_a;
	t_node	*bottom_b;
}	t_deque;

#endif