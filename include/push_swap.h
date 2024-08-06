/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvon-der <fvon-der@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 23:59:30 by fvon-der          #+#    #+#             */
/*   Updated: 2024/08/07 01:33:11 by fvon-der         ###   ########.fr       */
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

typedef struct s_stack
{
	long			nbr;
	struct s_stack	*next;
}	t_stack;

// Input 
t_stack		*ft_process(int argc, char **argv);
t_stack		*ft_sub_process(char **argv);
int			check_args(char **argv);
int			check_error(char **argv, int i, int j);
void		alpha_check(char **argv);
// parse
t_stack		*ft_parse_input(int argc, char **argv);
t_stack		*ft_parse_args_quoted(char **argv);
// list utils
void		list_args(char **argv, t_stack **stack_a);
void		ft_add_back(t_stack **stack, t_stack *stack_new);
int			ft_stacksize(t_stack *lst);
t_stack		*ft_stacklast(t_stack *lst);
t_stack		*ft_stack_new(int content);
// list_utils add
void		ft_free(t_stack **lst);
// LIBFT add
int			sign(int c);
int			digit(int c);
int			space(int c);
void		ft_freestr(char **lst);
// Finders
int			ft_min(t_stack *a);
int			ft_max(t_stack *a);
int			ft_find_index(t_stack *a, int nbr);
int			ft_find_place_b(t_stack *stack_b, int nbr_push);
int			ft_find_place_a(t_stack *a, int nbr);
// list validation
int			ft_checksorted(t_stack *stack_a);
int			ft_checkdup(t_stack *a);
// Operations Add
void		ft_ra(t_stack **a, int j);
void		ft_rb(t_stack **b, int j);
void		ft_sa(t_stack **a, int j);
void		ft_pa(t_stack **a, t_stack **b, int j);
void		ft_pb(t_stack **stack_a, t_stack **stack_b, int j);
// Operations Add
void		ft_rra(t_stack **a, int j);
void		ft_ss(t_stack **a, t_stack **b, int j);
void		ft_rr(t_stack **a, t_stack **b, int j);
void		ft_rrr_sub(t_stack **b, int j);
void		ft_rrr(t_stack **a, t_stack **b, int j);
// Operations Add 2
void		ft_rrb(t_stack **b, int j);
void		ft_sb(t_stack **b, int j);
// sorter
void		ft_sort(t_stack **stack_a);
t_stack		**ft_sort_a(t_stack **stack_a, t_stack **stack_b);
t_stack		*ft_sort_b(t_stack **stack_a);
// sorter scale
void		ft_sort_b_till_3(t_stack **stack_a, t_stack **stack_b);
void		ft_sort_three(t_stack **stack_a);
// Calc steps
int			ft_case_rarb_a(t_stack *a, t_stack *b, int c);
int			ft_case_rrarrb_a(t_stack *a, t_stack *b, int c);
int			ft_case_rarrb_a(t_stack *a, t_stack *b, int c);
int			ft_case_rrarb_a(t_stack *a, t_stack *b, int c);
int			ft_case_rarb(t_stack *a, t_stack *b, int c);
// Calc steps add
int			ft_case_rrarrb(t_stack *a, t_stack *b, int c);
int			ft_case_rrarb(t_stack *a, t_stack *b, int c);
int			ft_case_rarrb(t_stack *a, t_stack *b, int c);
// type rotation
int			ft_rotate_type_ab(t_stack *a, t_stack *b);
int			ft_rotate_type_ba(t_stack *a, t_stack *b);
// rotation func
int			ft_apply_rarb(t_stack **a, t_stack **b, int c, char s);
int			ft_apply_rrarrb(t_stack **a, t_stack **b, int c, char s);
int			ft_apply_rrarb(t_stack **a, t_stack **b, int c, char s);
int			ft_apply_rarrb(t_stack **a, t_stack **b, int c, char s);
//Error utils
void		print_exit(char *message, int mode);

// Bonus checker
void		ft_check_sub(t_stack **a, t_stack **b, char *line);
char		*ft_check(t_stack **a, t_stack **b, char *line);
void		ft_checker_sub(t_stack **a, t_stack **b, char *line);

#endif