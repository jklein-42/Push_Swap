/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 17:16:39 by jklein            #+#    #+#             */
/*   Updated: 2022/07/21 22:15:22 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <errno.h>

	/* -- this header file is the linking of my program -- */
	/* -- this file calls apond a request of a function -- */

void	ft_stack_pa(long *a, long *b, int *stack_a, int *stack_b);
void	ft_stack_pb(long *a, long *b, int *stack_a, int *stack_b);

void	ft_stack_sa(long *a, int *stack_a);
void	ft_stack_sb(long *b, int *stack_b);
void	ft_stack_ss(long *a, long *b, int *stack_a, int *stack_b);

void	ft_stack_ra(long *a, int *stack_a);
void	ft_stack_rb(long *b, int *stack_b);
void	ft_stack_rr(long *a, long *b, int *stack_a, int *stack_b);

void	ft_stack_rra(long *a, int *stack_a);
void	ft_stack_rrb(long *b, int *stack_b);
void	ft_stack_rrr(long *a, long *b, int *stack_a, int *stack_b);

int		ft_strlen(const char *s);
int		ft_isdigit(int i);
int		ft_atoi(const char *str);

char	**ft_split(char const *s, char c);

int		num_limit(long *a, int stack_a);
int		repeated_num(long *a, int stack_a);
int		only_num_in_stack(char *numbers);
int		stack_size(int argc, char **argv);

int		num_input(long *a, int *stack_a, char **argv, char**numbers_list);
int		standard_input(long *a, int *stack_a, char **argv);
int		seperating_input_num(long *a, int *stack_a, char **argv);
int		is_stack_sorted(long *a, int *stack_a);

void	free_string(char **str);
void	free_stacks(long *a, long *b, int *stack_a, int *stack_b);
void	reallocation(long *pointer, int startsize, int newsize);
void	parameters(long *a, long *b, int *stack_a, int *stack_b);

void	sort_3_num(long *a, int *stack_a);
void	sort_5_num(long *a, long *b, int *stack_a, int *stack_b);
void	rotate_stack_a_radix(long *a, int *stack_a);
void	reverse_rotate_stack_a_radix(long *a, int *stack_a);
void	first_stack(long *a, long *b, int *stack_a, int *stack_b);
void	second_stack(long *a, long *b, int *stack_a, int *stack_b);

void	num_larger_3_5(long *a, long *b, int *stack_a, int *stack_b);

void	sort_stack_selection(long *array, int *stack_size);

void	first_stack_swap(long *copy, long *copy_swap_a, long *a, int *stack_a);
void	second_stack_swap(long *copy, long *copy_swap_a, long *a, int *stack_a);
void	third_stack_swap(long *a, long *b, int *stack_a, int *stack_b);

void	free_and_exit(int *stack_a, int *stack_b);
void	free_and_exit_no_errors(int *stack_a, int *stack_b);
void	check_parameters(int argc, char **argv, int *stack_a, int *stack_b);
void	set_num(int *stack_a, int *stack_b, int argc);

int		main(int argc, char **argv);

#endif
