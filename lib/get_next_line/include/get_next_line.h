/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GET_NEXT_LINE.H                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-der <fvon-der@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 17:22:01 by fvon-der          #+#    #+#             */
/*   Updated: 2024/04/14 17:22:01 by fvon-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

# ifndef OPEN_MAX
#  define OPEN_MAX 100
# endif
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 512
# endif

char	*get_next_line(int fd);
char	*eof_residue(int fd, char *line, char *buffer, int *eol_posi);
char	*copy_full_line(char *buffer, int *eol_posi);
size_t	find_eol(char *line);

size_t	ft_strlen(const char *s);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*ft_partstrjoin(char *s1, char *s2, int *eol_loc);
void	shift_buffer(char *dst, const char *src, size_t dstsize);

#endif