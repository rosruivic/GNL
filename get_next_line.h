/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roruiz-v <roruiz-v@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:53:51 by roruiz-v          #+#    #+#             */
/*   Updated: 2023/03/04 16:05:29 by roruiz-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

int		ft_strlen(char *src);
char	*ft_calloc(size_t len, size_t size);
char	*ft_strchr(char *str, int lf);
char	*ft_join(char *s1, char *s2);
char	*ft_read_file(int fd, char *remember);
char	*ft_get_line(char *remember);
char	*ft_tail_remember(char *remember);
char	*get_next_line(int fd);

#endif