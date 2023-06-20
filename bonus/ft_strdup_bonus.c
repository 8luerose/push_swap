/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:19:58 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/20 16:42:23 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

char	*ft_strdup(const char *s1)
{
	char	*arr;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	arr = (char *)malloc((len + 1) * (sizeof(char)));
	if (!(arr))
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		arr[i] = s1[i];
		i++;
	}
	arr[len] = '\0';
	return (arr);
}
