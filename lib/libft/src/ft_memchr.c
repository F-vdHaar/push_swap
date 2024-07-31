/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-der <fvon-der@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 07:46:09 by fvon-der          #+#    #+#             */
/*   Updated: 2024/07/01 16:08:17 by fvon-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
//Searches for the first occurrence of the character c (an unsigned char) 
//in the first n bytes of the string pointed to by the argument str.
//Returns a pointer pointing to the first matching character, 
//or null if no match was found.

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		chr;
	size_t				i;

	ptr = s;
	chr = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*ptr == chr)
		{
			return ((void *)ptr);
		}
		ptr++;
		i++;
	}
	return (NULL);
}
