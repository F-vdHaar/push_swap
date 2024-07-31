/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-der <fvon-der@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 22:49:19 by fvon-der          #+#    #+#             */
/*   Updated: 2024/07/27 22:14:22 by fvon-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
// malloc but  all the memory bytes are set to 0
//any arithm operation resulting in value greater than SIZE_MAX will overflow.

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	size_t	t_size;
	void	*memptr;

	if (num_elements == 0 || element_size == 0)
		return (malloc(0));
	t_size = num_elements * element_size;
	memptr = malloc(t_size);
	if (memptr != NULL)
	{
		ft_bzero(memptr, t_size);
	}
	return (memptr);
}
