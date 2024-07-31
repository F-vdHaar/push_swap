/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-der <fvon-der@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 01:07:06 by fvon-der          #+#    #+#             */
/*   Updated: 2024/07/01 16:05:53 by fvon-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_isalnum(int c)
{
	int	res;

	res = 0;
	if (ft_isalpha(c) || ft_isdigit(c))
		res = 1;
	return (res);
}
