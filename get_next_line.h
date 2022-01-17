/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fatalem0 <fatalem0@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 06:22:33 by fatalem0          #+#    #+#             */
/*   Updated: 2022/01/17 07:17:10 by fatalem0         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# if BUFFER_SIZE < 0
#  undef BUFFER_SIZE
#  define BUFFER_SIZE 0
# endif
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10000000
# endif
# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*ft_read(int fd, char *stat);
char	*parse_line(char *str);
char	*clear_stat(char *stat);
int		ft_strlen(char *str);
int		is_nl(char *str);
char	*ft_strjoin(char *s1, char *s2);

#endif
