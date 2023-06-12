/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 19:31:35 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/12 20:30:10 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*split_to_atoi(int ac, char **av)
{
	int		i;
	int		j;
	int		k;
	char	**str;
	int		*result;
	
	i = 0;
	while (++i < ac)
	{
		str = ft_split(av[i], ' ');
		j = -1;
		while (str[++j])
		{
			result = ft_atoi(str);
		}
	}
}

int	is_sorted(int ac, char **av)
{
	int	i;
	int	j;
	int	tmp;
	int	cnt;

	cnt = 0;
	i = 0;
	while (i < ac - 1)
	{
		j = 0;
		while (j < ac - 1 - i)
		{
			if ()
		}
	}
}