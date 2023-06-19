/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:46:37 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/19 19:34:21 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

# include <stdio.h>

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
void	pa(t_deque *deque_a, t_deque *deque_b);
void	pb(t_deque *deque_a, t_deque *deque_b);
void	ra(t_deque *deque_a);
void	rb(t_deque *deque_b);
void	rr(t_deque *deque_a, t_deque *deque_b);
void	rra(t_deque *deque_a);
void	rrb(t_deque *deque_b);
void	rrr(t_deque *deque_a, t_deque *deque_b);
void	sa(t_deque *deque_a);
void	sb(t_deque *deque_b);
void	ss(t_deque *deque_a, t_deque *deque_b);
int		find_data_front(t_deque *deque);
int		find_data_back(t_deque *deque);
void	free_deque(t_deque *deque);
void	print_error(void);
int		ft_atoi(const char *str);
char	**ft_split(char const *s, char c);
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
void	free_split(char **s, int i);

#endif