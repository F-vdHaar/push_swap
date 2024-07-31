/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-der <fvon-der@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:10:17 by fvon-der          #+#    #+#             */
/*   Updated: 2024/07/01 16:07:04 by fvon-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

//locates the LAST locates occurrence of c (converted to a char)
//in string pointed to by s.
char	*ft_strrchr(const char *s, int c)
{
	char	*last_occurrence;

	last_occurrence = NULL;
	while (*s)
	{
		if (*s == (char) c)
			last_occurrence = ((char *)s);
		s++;
	}
	if ((char) c == '\0')
		return ((char *)s);
	return (last_occurrence);
}
