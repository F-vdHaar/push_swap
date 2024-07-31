/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-der <fvon-der@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 22:37:37 by fvon-der          #+#    #+#             */
/*   Updated: 2024/07/01 16:05:41 by fvon-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr ;

	ptr = (unsigned char *)s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
	return ;
}
