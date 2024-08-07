/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-der <fvon-der@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 21:48:59 by fvon-der          #+#    #+#             */
/*   Updated: 2024/08/07 03:10:10 by fvon-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	print_exit(char *message, int mode)
{
	if (mode == 0)
	{
		(void)message;
		ft_printf("%s\n", message);
		exit(EXIT_SUCCESS);
	}
	else if(mode == 1)
	{
		ft_printf("\nError: %s\n", message);
		exit(EXIT_FAILURE);
	}
}
