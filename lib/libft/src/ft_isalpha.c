/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-der <fvon-der@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 20:10:06 by fvon-der          #+#    #+#             */
/*   Updated: 2024/07/01 16:05:57 by fvon-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_isalpha(int c)
{
	int	res;

	res = 0;
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		res = 1;
	return (res);
}

/*
int main() {

	char source[] = "eggsandham";

    ft_str_is_alpha(source);

    return 0;
}
*/