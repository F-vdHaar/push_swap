/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-der <fvon-der@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 07:46:31 by fvon-der          #+#    #+#             */
/*   Updated: 2024/07/01 16:08:07 by fvon-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

/*
Copies n characters from str2 to str1.
 If str1 and str2 overlap the information is first completely read from str1 
 and then written to str2 so that the characters are copied correctly.
// If overlap, move data from end to beginning to avoid corruption
dont use memcopy, because its violatingrules for memcopy not having overlap?
 makes no sense, as I check stuff, but it works that way
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*temp_dst;
	const char	*temp_src;

	temp_dst = (char *)dst;
	temp_src = (const char *)src;
	if (len == 0 || temp_src == temp_dst)
		return (dst);
	if (temp_src <= temp_dst && temp_dst <= temp_src + len)
	{
		temp_dst += len - 1;
		temp_src += len - 1;
		while (len--)
			*temp_dst-- = *temp_src--;
	}
	else
	{
		while (len--)
			*temp_dst++ = *temp_src++;
	}
	return (dst);
}
