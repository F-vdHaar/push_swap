/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-der <fvon-der@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:07:58 by fvon-der          #+#    #+#             */
/*   Updated: 2024/07/01 16:07:34 by fvon-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
// Applies the function ’f’ on each character of the string passed as argument, 
//passing its index as first argument. Each character is passed by address
// to ’f’ to be modified if necessary.
//works directly on the original string.

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
