/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 19:59:21 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/21 16:34:30 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include "get_next_line.h"

typedef struct s_node
{
	struct s_node	*prev;
	int				data;
	struct s_node	*next;
}	t_node;
typedef struct s_deque
{
	int		size;
	t_node	*front;
	t_node	*back;
}	t_deque;

t_deque	*deque_init(void);
void	push_front(t_deque *deque, int data);
void	push_back(t_deque *deque, int data);
void	pop_front(t_deque *deque);
void	pop_back(t_deque *deque);
void	pa_bonus(t_deque *deque_a, t_deque *deque_b);
void	pb_bonus(t_deque *deque_a, t_deque *deque_b);
void	ra_bonus(t_deque *deque_a);
void	rb_bonus(t_deque *deque_b);
void	rr_bonus(t_deque *deque_a, t_deque *deque_b);
void	rra_bonus(t_deque *deque_a);
void	rrb_bonus(t_deque *deque_b);
void	rrr_bonus(t_deque *deque_a, t_deque *deque_b);
void	sa_bonus(t_deque *deque_a);
void	sb_bonus(t_deque *deque_b);
void	ss_bonus(t_deque *deque_a, t_deque *deque_b);
int		find_data_front(t_deque *deque);
int		find_data_back(t_deque *deque);
void	free_deque(t_deque *deque);
void	print_error(void);
int		ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
void	free_split(char **s, int i);
char	*ft_strchr(const char *s, int c);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
int		*split_to_atoi(int ac, char **av, t_deque *deque_a);
int		*making_arr(t_deque *deque_a);
void	check_sort(int *arr, t_deque *deque_a, int i);
void	indexing_list(int *arr, t_deque *deque_a);
int		ft_max(t_deque *deque);
int		ft_min(t_deque *deque);
void	sort_3(t_deque *deque);
void	sort_5(t_deque *deque_a, t_deque *deque_b);
void	push_swap(t_deque *a, t_deque *b);
void	a_to_b(t_deque *a, t_deque *b, int chunk, int i);
int		max_location(t_deque *b, int max);
void	b_to_a(t_deque *a, t_deque *b, int max);
int		chunk_rotate(t_deque *deque, int chunk_value);
int		check_duplicaton(int *arr, t_deque *deque_a);
void	checker(t_deque *deque_a, t_deque *deque_b);
void	checker_command(t_deque *deque_a, t_deque *deque_b, char *line);
void	ft_putstr(char *s);
int		is_sorted(t_deque *deque_a, t_deque *deque_b);

#endif