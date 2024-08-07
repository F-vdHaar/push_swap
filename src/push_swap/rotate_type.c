/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-der <fvon-der@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 21:50:09 by fvon-der          #+#    #+#             */
/*   Updated: 2024/08/07 04:07:55 by fvon-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	ft_rotate_type_ba(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*tmp;

	tmp = b;
	i = ft_calc_rrarrb_a(a, b, b->nbr);
	while (tmp)
	{
		if (i > ft_calc_rarb_a(a, b, tmp->nbr))
			i = ft_calc_rarb_a(a, b, tmp->nbr);
		if (i > ft_calc_rrarrb_a(a, b, tmp->nbr))
			i = ft_calc_rrarrb_a(a, b, tmp->nbr);
		if (i > ft_calc_rarrb_a(a, b, tmp->nbr))
			i = ft_calc_rarrb_a(a, b, tmp->nbr);
		if (i > ft_calc_rrarb_a(a, b, tmp->nbr))
			i = ft_calc_rrarb_a(a, b, tmp->nbr);
		tmp = tmp->next;
	}
	return (i);
}

int	ft_rotate_type_ab(t_stack *a, t_stack *b)
{
	int		i;
	t_stack	*tmp;

	tmp = a;
	i = ft_calc_rrarrb(a, b, a->nbr);
	while (tmp)
	{
		if (i > ft_calc_rarb(a, b, tmp->nbr))
			i = ft_calc_rarb(a, b, tmp->nbr);
		if (i > ft_calc_rrarrb(a, b, tmp->nbr))
			i = ft_calc_rrarrb(a, b, tmp->nbr);
		if (i > ft_calc_rarrb(a, b, tmp->nbr))
			i = ft_calc_rarrb(a, b, tmp->nbr);
		if (i > ft_calc_rrarb(a, b, tmp->nbr))
			i = ft_calc_rrarb(a, b, tmp->nbr);
		tmp = tmp->next;
	}
	return (i);
}
