/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-der <fvon-der@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 14:44:08 by fvon-der          #+#    #+#             */
/*   Updated: 2024/07/01 16:07:30 by fvon-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*result;
	int		i;
	int		j;

	i = 0;
	j = 0;
	result = (char *) ft_calloc(sizeof(char), ft_strlen(s1) + ft_strlen(s2)+1);
	if (!result || (!s1 && !s2))
		return (NULL);
	while (s1[i])
		result[j++] = s1[i++];
	i = 0 ;
	while (s2[i])
		result[j++] = s2[i++];
	result[j] = '\0';
	return (result);
}
