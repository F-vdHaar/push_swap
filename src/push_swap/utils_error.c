/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-der <fvon-der@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 21:48:59 by fvon-der          #+#    #+#             */
/*   Updated: 2024/08/06 22:22:02 by fvon-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_error(void)
{	
	write (2, "Error\n", 6);
	exit(1);
}

void	print_exit(char *message, int mode)
{
	if (mode == 1)
	{
		ft_printf("%s\n", message);
		exit(EXIT_SUCCESS);
	}
	else
	{
		ft_printf("%s\n", message);
		exit(EXIT_FAILURE);
	}
}
