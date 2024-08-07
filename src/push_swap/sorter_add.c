/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter_add.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-der <fvon-der@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 22:37:26 by fvon-der          #+#    #+#             */
/*   Updated: 2024/08/07 05:09:58 by fvon-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_sort_big(t_list **stack_a, t_list **stack_b)
{
	int		i;
	t_list	*tmp;

	while (ft_lstsize(*stack_a) > 3 && !is_sorted(*stack_a))
	{
		tmp = *stack_a;
		i = ft_calc_rotate_ab(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == ft_calc_rarb(*stack_a, *stack_b, *(int *)tmp->content))
				i = ft_exec_rarb(stack_a, stack_b, *(int *)tmp->content, 'a');
			else if (i == ft_calc_rrarrb(*stack_a, *stack_b,
					*(int *)tmp->content))
				i = ft_exec_rrarrb(stack_a, stack_b, *(int *)tmp->content, 'a');
			else if (i == ft_calc_rarrb(*stack_a, *stack_b,
					*(int *)tmp->content))
				i = ft_exec_rarrb(stack_a, stack_b, *(int *)tmp->content, 'a');
			else if (i == ft_calc_rrarb(*stack_a, *stack_b,
					*(int *)tmp->content))
				i = ft_exec_rrarb(stack_a, stack_b, *(int *)tmp->content, 'a');
			else
				tmp = tmp->next;
		}
	}
}

void	ft_sort_min(t_list **stack_a)
{
	if (ft_min(*stack_a) == *(int *)(*stack_a)->content)
	{
		ft_rra(stack_a, 0);
		ft_sa(stack_a, 0);
	}
	else if (ft_max(*stack_a) == *(int *)(*stack_a)->content)
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