/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehkwon <taehkwon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 20:00:22 by taehkwon          #+#    #+#             */
/*   Updated: 2023/06/25 18:39:46 by taehkwon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

char	*get_next_line(int fd);
char	*make_line(int fd, char *backup, char *buffer);
char	*save_backup(char **line);
char	*cut_line(char **line);
char	*gnl_free(char **p);

size_t	ft_strlen_mandatory(const char *s);
char	*ft_strdup_mandatory(const char *s1);
char	*ft_strjoin_mandatory(char const *s1, char const *s2);
char	*ft_strchr_mandatory(const char *s, int c);
char	*ft_substr_mandatory(char const *s, unsigned int start, size_t len);

#endif