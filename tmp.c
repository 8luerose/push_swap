                                      
#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_deque	*a_deque;
	t_deque	*b_deque;
	t_node	*node;
	char	**args;
	int		i;
	int		j;

	if (argc == 1 || is_sorted(argv))
		return (0);
	a_deque = init_deque();
	b_deque = init_deque();
	i = 0;
	while (++i < argc)
	{
		args = ft_split(argv[i], ' ');
		j = -1;
		while (args[++j])
		{
			if (!is_valid(args[j], a_deque))
				return_error();
			node = init_node(index_of_sorted_array(ft_atoi(args[j]), a_deque));
			add_node_to_deque(node, a_deque);
		}
		free_split(args, j);
	}
	push_swap(a_deque, b_deque);
	free_deque(a_deque);
	free_deque(b_deque);
	return (0);
}
