/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter_add.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-der <fvon-der@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 22:37:26 by fvon-der          #+#    #+#             */
/*   Updated: 2024/08/07 04:10:09 by fvon-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_sort_big(t_stack **stack_a, t_stack **stack_b)
{
	int		i;
	t_stack	*tmp;

	while (ft_stacksize(*stack_a) > 3 && !is_sorted(*stack_a))
	{
		tmp = *stack_a;
		i = ft_rotate_type_ab(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == ft_calc_rarb(*stack_a, *stack_b, tmp->nbr))
				i = ft_exec_rarb(stack_a, stack_b, tmp->nbr, 'a');
			else if (i == ft_calc_rrarrb(*stack_a, *stack_b, tmp->nbr))
				i = ft_exec_rrarrb(stack_a, stack_b, tmp->nbr, 'a');
			else if (i == ft_calc_rarrb(*stack_a, *stack_b, tmp->nbr))
				i = ft_exec_rarrb(stack_a, stack_b, tmp->nbr, 'a');
			else if (i == ft_calc_rrarb(*stack_a, *stack_b, tmp->nbr))
				i = ft_exec_rrarb(stack_a, stack_b, tmp->nbr, 'a');
			else
				tmp = tmp->next;
		}
	}
}

void	ft_sort_min(t_stack **stack_a)
{
	if (ft_min(*stack_a) == (*stack_a)->nbr)
	{
		ft_rra(stack_a, 0);
		ft_sa(stack_a, 0);
	}
	else if (ft_max(*stack_a) == (*stack_a)->nbr)
	{
		ft_ra(stack_a, 0);
		if (!is_sorted(*stack_a))
			ft_sa(stack_a, 0);
	}
	else
	{
		if (ft_find_index(*stack_a, ft_max(*stack_a)) == 1)
			ft_rra(stack_a, 0);
		else
			ft_sa(stack_a, 0);
	}
}