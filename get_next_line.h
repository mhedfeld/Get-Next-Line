/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhedfeld <mhedfeld@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:08:19 by mhedfeld          #+#    #+#             */
/*   Updated: 2023/10/04 13:08:23 by mhedfeld         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*ft_read(int fd, char *stash);
char	*ft_left_stash(char *stash, char *line);
int		ft_strlen(char *p);
int		ft_nl_check(char *p);
char	*ft_strjoin(char *stash, char *buf);
char	*ft_getline(char *stash);

#endif