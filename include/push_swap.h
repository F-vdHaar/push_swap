/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-der <fvon-der@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 23:59:30 by fvon-der          #+#    #+#             */
/*   Updated: 2024/08/07 04:53:46 by fvon-der         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include "../lib/libft/include/libft.h"
# include "../lib/ft_printf/include/ft_printf.h"
# include "../lib/get_next_line/include/get_next_line.h"

// Input 
t_list		*ft_process_input(int argc, char **argv);
// list utils
void		list_args(char **argv, t_list **stack_a);
t_list		*ft_lstnew_int(int value);
// list_utils add
void		ft_free(t_list **lst);
// LIBFT add
int			ft_issign(int c);
int			ft__isspace(int c);
void		ft_freestr(char **lst);
// Finders
int			ft_min(t_list *a);
int			ft_max(t_list *a);
int			ft_find_index(t_list *a, int nbr);
int			ft_find_place_b(t_list *stack_b, int nbr_push);
int			ft_find_place_a(t_list *a, int nbr);
// list validation
int			is_sorted(t_list *stack_a);
int			is_duplicate(t_list *a);
// Operations Add
void		ft_ra(t_list **a, int j);
void		ft_rb(t_list **b, int j);
void		ft_sa(t_list **a, int j);
void		ft_pa(t_list **a, t_list **b, int j);
void		ft_pb(t_list **stack_a, t_list **stack_b, int j);
// Operations Add
void		ft_rra(t_list **a, int j);
void		ft_ss(t_list **a, t_list **b, int j);
void		ft_rr(t_list **a, t_list **b, int j);
void		ft_rrr(t_list **a, t_list **b, int j);
// Operations Add 2
void		ft_rrb(t_list **b, int j);
void		ft_sb(t_list **b, int j);
// sorter
void		ft_sort(t_list **stack_a);
t_list		**ft_sort_a(t_list **stack_a, t_list **stack_b);
t_list		*ft_sort_b(t_list **stack_a);
// sorter scale
void		ft_sort_big(t_list **stack_a, t_list **stack_b);
void		ft_sort_min(t_list **stack_a);
// Calc steps
int			ft_calc_rarb_a(t_list *a, t_list *b, int c);
int			ft_calc_rrarrb_a(t_list *a, t_list *b, int c);
int			ft_calc_rarrb_a(t_list *a, t_list *b, int c);
int			ft_calc_rrarb_a(t_list *a, t_list *b, int c);
int			ft_calc_rarb(t_list *a, t_list *b, int c);
// Calc steps add
int			ft_calc_rrarrb(t_list *a, t_list *b, int c);
int			ft_calc_rrarb(t_list *a, t_list *b, int c);
int			ft_calc_rarrb(t_list *a, t_list *b, int c);
// type rotation
int			ft_calc_rotate_ab(t_list *a, t_list *b);
int			ft_calc_rotate_ba(t_list *a, t_list *b);
// rotation func
int			ft_exec_rarb(t_list **a, t_list **b, int c, char s);
int			ft_exec_rrarrb(t_list **a, t_list **b, int c, char s);
int			ft_exec_rrarb(t_list **a, t_list **b, int c, char s);
int			ft_exec_rarrb(t_list **a, t_list **b, int c, char s);
//Error utils
void		print_exit(char *message, int mode);

// Bonus checker
void		ft_command_add(t_list **a, t_list **b, char *line);
char		*ft_command_exec(t_list **a, t_list **b, char *line);
void		ft_ps_operation_validity(t_list **a, t_list **b, char *line);

#endif