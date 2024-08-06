/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_steps.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-der <fvon-der@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 22:43:01 by fvon-der          #+#    #+#             */
/*   Updated: 2024/08/07 01:10:16 by fvon-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

int	ft_case_rarb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = ft_find_place_a(a, c);
	if (i < ft_find_index(b, c))
		i = ft_find_index(b, c);
	return (i);
}


int	ft_case_rrarb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_a(a, c))
		i = ft_stacksize(a) - ft_find_place_a(a, c);
	i = ft_find_index(b, c) + i;
	return (i);
}

int	ft_case_rarrb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_index(b, c))
		i = ft_stacksize(b) - ft_find_index(b, c);
	i = ft_find_place_a(a, c) + i;
	return (i);
}

int	ft_case_rrarrb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_a(a, c))
		i = ft_stacksize(a) - ft_find_place_a(a, c);
	if ((i < (ft_stacksize(b) - ft_find_index(b, c))) && ft_find_index(b, c))
		i = ft_stacksize(b) - ft_find_index(b, c);
	return (i);
}
