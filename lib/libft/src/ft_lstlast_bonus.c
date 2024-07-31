/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-der <fvon-der@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 16:22:49 by fvon-der          #+#    #+#             */
/*   Updated: 2024/07/01 16:08:30 by fvon-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp_lst;

	temp_lst = lst;
	if (!lst)
		return (NULL);
	while (temp_lst->next)
		temp_lst = temp_lst->next;
	return (temp_lst);
}
