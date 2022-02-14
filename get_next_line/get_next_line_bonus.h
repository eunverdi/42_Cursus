/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eunverdi <eunverdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:03:55 by eunverdi          #+#    #+#             */
/*   Updated: 2022/02/12 17:16:10 by eunverdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

char	*get_next_line(int fd);
char	*read_left_str(int fd, char *left_str);
char	*ft_strchr(char *s, int c);
size_t	ft_strlen(char *s);
char	*get_line(char *left_str);
char	*new_left_str(char *left_str);
char	*ft_strjoin(char *s1, char *s2);

#endif  