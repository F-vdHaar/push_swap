/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-der <fvon-der@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:17:13 by fvon-der          #+#    #+#             */
/*   Updated: 2024/07/01 16:07:49 by fvon-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
//write a string on a specified file descriptor

void	ft_putstr_fd(char *str, int fd)
{
	size_t	len;

	len = ft_strlen(str);
	if (!str || fd < 0)
		return ;
	write(fd, str, len);
}
