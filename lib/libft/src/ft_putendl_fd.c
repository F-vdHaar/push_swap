/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-der <fvon-der@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:25:24 by fvon-der          #+#    #+#             */
/*   Updated: 2024/07/01 16:07:56 by fvon-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

// write a string on a specified file descriptor, follow by a newline
void	ft_putendl_fd(char *str, int fd)
{
	ft_putstr_fd(str, fd);
	write(fd, "\n", 1);
}
