/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-der <fvon-der@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 07:46:17 by fvon-der          #+#    #+#             */
/*   Updated: 2024/07/01 16:08:13 by fvon-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

//compares byte string s1 against byte string s2.
//Both strings are assumed to be n bytes long.
//returns zero if the two strings are identical,
//otherwise returns the difference between the
//first two differing bytes (treated as unsigned char values,
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	while (i < n)
	{
		if ((unsigned char) str1[i] != (unsigned char) str2[i])
			return ((unsigned char) str1[i] - (unsigned char) str2[i]);
		i++;
	}
	return (0);
}
