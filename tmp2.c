
#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_deque	*a_deque = init_deque();
	t_deque	*b_deque = init_deque();
	char	**args;
	int		i = 0, j;

	if (argc == 1 || is_sorted(argv)) return (0);
	while (++i < argc)
	{
		args = ft_split(argv[i], ' ');
		j = -1;
		while (args[++j])
			if (!is_valid(args[j], a_deque)) return_error();
			else add_node_to_deque(init_node(index_of_sorted_array(ft_atoi(args[j]), a_deque)), a_deque);
		free_split(args, j);
	}
	push_swap(a_deque, b_deque);
	free_deque(a_deque); free_deque(b_deque);
	return (0);
}
