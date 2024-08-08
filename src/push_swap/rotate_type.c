/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-der <fvon-der@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 21:50:09 by fvon-der          #+#    #+#             */
/*   Updated: 2024/08/07 05:00:11 by fvon-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	ft_calc_rotate_ba(t_list *a, t_list *b)
{
	int		i;
	t_list	*tmp;

	tmp = b;
	i = ft_calc_rrarrb_a(a, b, *(int *)b->content);
	while (tmp)
	{
		if (i > ft_calc_rarb_a(a, b, *(int *)tmp->content))
			i = ft_calc_rarb_a(a, b, *(int *)tmp->content);
		if (i > ft_calc_rrarb_a(a, b, *(int *)tmp->content))
			i = ft_calc_rrarb_a(a, b, *(int *)tmp->content);
		if (i > ft_calc_rrarrb_a(a, b, *(int *)tmp->content))
			i = ft_calc_rrarrb_a(a, b, *(int *)tmp->content);
		if (i > ft_calc_rarrb_a(a, b, *(int *)tmp->content))
			i = ft_calc_rarrb_a(a, b, *(int *)tmp->content);
		tmp = tmp->next;
	}
	return (i);
}

int	ft_calc_rotate_ab(t_list *a, t_list *b)
{
	int		i;
	t_list	*tmp;

	tmp = a;
	i = ft_calc_rrarrb(a, b, *(int *)a->content);
	while (tmp)
	{
		if (i > ft_calc_rarb(a, b, *(int *)tmp->content))
			i = ft_calc_rarb(a, b, *(int *)tmp->content);
		if (i > ft_calc_rarrb(a, b, *(int *)tmp->content))
			i = ft_calc_rarrb(a, b, *(int *)tmp->content);
		if (i > ft_calc_rrarb(a, b, *(int *)tmp->content))
			i = ft_calc_rrarb(a, b, *(int *)tmp->content);
		if (i > ft_calc_rrarrb(a, b, *(int *)tmp->content))
			i = ft_calc_rrarrb(a, b, *(int *)tmp->content);
		tmp = tmp->next;
	}
	return (i);
}
