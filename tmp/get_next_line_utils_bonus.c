/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 21:56:37 by taehkwon          #+#    #+#             */
/*   Updated: 2023/04/29 18:13:13 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *s1)
{
	char	*arr;
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	arr = (char *)malloc((len + 1) * (sizeof(char)));
	if ((arr) == 0)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		arr[i] = s1[i];
		i++;
	}
	arr[len] = '\0';
	return (arr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*result;
	char	*result_cpy;

	if (!s1 && !s2)
		return (0);
	else if (!s1)
		return (ft_strdup(s2));
	else if (!s2)
		return (ft_strdup(s1));
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	result = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!result)
		return (0);
	result_cpy = result;
	while (*s1)
		*(result_cpy++) = *(s1++);
	while (*s2)
		*(result_cpy++) = *(s2++);
	result[s1_len + s2_len] = '\0';
	return (result);
}

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)s + i);
	return (0);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	char	*result_cpy;
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
	if (result == 0)
		return (0);
	result_cpy = result;
	while (*(s + start))
		*(result_cpy++) = *(s + start++);
	result[result_len] = '\0';
	return (result);
}
