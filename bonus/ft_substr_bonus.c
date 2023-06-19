/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:21:13 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/15 18:21:27 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	s_len;
	size_t	result_len;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	result_len = s_len - start;
	if (result_len > len)
		result_len = len;
	result = (char *)malloc((result_len + 1) * sizeof(char));
	if (!result)
		return (0);
	ft_memcpy(result, s + start, result_len);
	result[result_len] = '\0';
	return (result);
}
