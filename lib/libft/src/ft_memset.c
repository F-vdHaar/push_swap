/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-der <fvon-der@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 21:41:07 by fvon-der          #+#    #+#             */
/*   Updated: 2024/07/01 16:08:03 by fvon-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

// writes len bytes of value c (converted to an unsigned char) to the string b
//returns its first argument
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	val;
	unsigned char	*ptr;

	val = (unsigned char)c;
	ptr = b;
	while (len)
	{
		*ptr = val;
		ptr++;
		len--;
	}
	return (b);
}
