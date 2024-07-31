/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-der <fvon-der@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:15:09 by fvon-der          #+#    #+#             */
/*   Updated: 2024/07/01 16:07:52 by fvon-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	n_aslong;
	char	c;

	n_aslong = (long)n;
	if (fd < 0 || n_aslong > INT_MAX || n_aslong < INT_MIN)
		return ;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n_aslong = n_aslong * -1;
	}
	if (n_aslong >= 10)
		ft_putnbr_fd((int)(n_aslong / 10), fd);
	c = n_aslong % 10 + '0';
	write(fd, &c, 1);
}
