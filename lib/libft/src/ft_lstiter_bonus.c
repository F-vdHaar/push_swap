/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-der <fvon-der@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 21:01:57 by fvon-der          #+#    #+#             */
/*   Updated: 2024/07/01 16:06:29 by fvon-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

// iterates over the whole list
//applies the function f to the content fo the elements
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	if (!lst || !f)
		return ;
	current = lst;
	while (current)
	{
		f(current->content);
		current = current->next;
	}
}
