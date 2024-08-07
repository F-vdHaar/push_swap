/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-der <fvon-der@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 22:29:14 by fvon-der          #+#    #+#             */
/*   Updated: 2024/08/07 05:07:01 by fvon-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	ft_sort(t_list **stack_a)
{
	t_list	*stack_b;
	int		i;

	stack_b = NULL;
	if (ft_lstsize(*stack_a) == 2)
		ft_sa(stack_a, 0);
	else
	{
		stack_b = ft_sort_b(stack_a);
		stack_a = ft_sort_a(stack_a, &stack_b);
		i = ft_find_index(*stack_a, ft_min(*stack_a));
		if (i < ft_lstsize(*stack_a) - i)
		{
			while (*(int *)(*stack_a)->content != ft_min(*stack_a))
				ft_ra(stack_a, 0);
		}
		else
		{
			while (*(int *)(*stack_a)->content != ft_min(*stack_a))
				ft_rra(stack_a, 0);
		}			
	}	
}

t_list	*ft_sort_b(t_list **stack_a)
{
	t_list	*stack_b;

	stack_b = NULL;
	if (ft_lstsize(*stack_a) > 3 && !is_sorted(*stack_a))
		ft_pb(stack_a, &stack_b, 0);
	if (ft_lstsize(*stack_a) > 3 && !is_sorted(*stack_a))
		ft_pb(stack_a, &stack_b, 0);
	if (ft_lstsize(*stack_a) > 3 && !is_sorted(*stack_a))
		ft_sort_big(stack_a, &stack_b);
	if (!is_sorted(*stack_a))
		ft_sort_min(stack_a);
	return (stack_b);
}

t_list	**ft_sort_a(t_list **stack_a, t_list **stack_b)
{
	int		i;
	t_list	*tmp;

	while (*stack_b)
	{
		tmp = *stack_b;
		i = ft_calc_rotate_ba(*stack_a, *stack_b);
		while (i >= 0)
		{
			if (i == ft_calc_rarb_a(*stack_a, *stack_b, *(int *)tmp->content))
				i = ft_exec_rarb(stack_a, stack_b, *(int *)tmp->content, 'b');
			else if (i == ft_calc_rarrb_a(*stack_a, *stack_b, *(int *)tmp->content))
				i = ft_exec_rarrb(stack_a, stack_b, *(int *)tmp->content, 'b');
			else if (i == ft_calc_rrarrb_a(*stack_a, *stack_b, *(int *)tmp->content))
				i = ft_exec_rrarrb(stack_a, stack_b, *(int *)tmp->content, 'b');
			else if (i == ft_calc_rrarb_a(*stack_a, *stack_b, *(int *)tmp->content))
				i = ft_exec_rrarb(stack_a, stack_b, *(int *)tmp->content, 'b');
			else
				tmp = tmp->next;
		}
	}
	return (stack_a);
}
