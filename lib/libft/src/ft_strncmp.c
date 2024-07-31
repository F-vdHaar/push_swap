/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-der <fvon-der@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 07:01:41 by fvon-der          #+#    #+#             */
/*   Updated: 2024/07/01 16:07:13 by fvon-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

//locate character in string.
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && *s2 && (n > 0))
	{
		if ((unsigned char)*s1 != (unsigned char)*s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
