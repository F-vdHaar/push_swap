/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_add_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-der <fvon-der@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 20:40:07 by fvon-der          #+#    #+#             */
/*   Updated: 2024/08/07 04:39:11 by fvon-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_rb(t_list **b, int j)
{
	t_list	*tmp;

	if (!*b || !(*b)->next)
		return ;
	tmp = *b;
	*b = ft_lstlast(*b);
	(*b)->next = tmp;
	*b = tmp->next;
	tmp->next = NULL;
	if (j == 0)
		write(1, "rb\n", 3);
}

void	ft_sb(t_list **b, int j)
{
	t_list	*tmp;

	if (!*b || !((*b)->next))
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = (*b)->next;
	(*b)->next = tmp;
	if (j == 0)
		write(1, "sb\n", 3);
}
