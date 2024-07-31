/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-der <fvon-der@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 06:31:16 by fvon-der          #+#    #+#             */
/*   Updated: 2024/07/01 16:07:37 by fvon-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*s2;

	len = ft_strlen(s1);
	s2 = (char *)malloc(len + 1);
	if (s2 == NULL)
		return (NULL);
	ft_strlcpy(s2, s1, len + 1);
	return (s2);
}
