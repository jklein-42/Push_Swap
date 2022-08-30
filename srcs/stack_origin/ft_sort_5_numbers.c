/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_5_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:46:10 by jklein            #+#    #+#             */
/*   Updated: 2022/07/21 22:46:08 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/* -- this function will allicate a limit of 5 numbers,
	 	   the input of the numbers for 5 will be placed
		  in a stack with this program -- */

#include "../headers/push_swap.h"

	/* -- this is the data of stacks being sorted -- */

void	rotate_stack_a_radix(long *a, int *stack_a)
{
	ft_stack_ra(a, stack_a);
	ft_stack_ra(a, stack_a);
}

	/* -- this function also controlls the data of the stacks -- */

void	reverse_rotate_stack_a_radix(long *a, int *stack_a)
{
	ft_stack_rra(a, stack_a);
	ft_stack_rra(a, stack_a);
}

	/* -- this function is the order of the first stack -- */

void	first_stack(long *a, long *b, int *stack_a, int *stack_b)
{
	if (b[0] < a[0])
	{
		ft_stack_pa(a, b, stack_a, stack_b);
	}
	else if ((b[0] > a[0]) && (b[0] < a[1]))
	{
		ft_stack_ra(a, stack_a);
		ft_stack_pa(a, b, stack_a, stack_b);
		ft_stack_rra(a, stack_a);
	}
	else if ((b[0] > a[1]) && (b[0] < a[2]))
	{
		ft_stack_rra(a, stack_a);
		ft_stack_pa(a, b, stack_a, stack_b);
		ft_stack_rra(a, stack_a);
		ft_stack_rra(a, stack_a);
	}
	else if (b[0] > a[2])
	{
		ft_stack_pa(a, b, stack_a, stack_b);
		ft_stack_ra(a, stack_a);
	}
}

	/* -- this function is the order of the second stack -- */

void	second_stack(long *a, long *b, int *stack_a, int *stack_b)
{
	if (b[0] < a[0])
		ft_stack_pa(a, b, stack_a, stack_b);
	else if ((b[0] > a[0]) && (b[0] < a[1]))
	{
		ft_stack_ra(a, stack_a);
		ft_stack_pa(a, b, stack_a, stack_b);
		ft_stack_rra(a, stack_a);
	}
	else if ((b[0] > a[1]) && (b[0] < a[2]))
	{
		ft_stack_ra(a, stack_a);
		ft_stack_pa(a, b, stack_a, stack_b);
		ft_stack_sa(a, stack_a);
		ft_stack_rra(a, stack_a);
	}
	else if ((b[0] > a[2]) && (b[0] < a[3]))
	{
		ft_stack_rra(a, stack_a);
		ft_stack_pa(a, b, stack_a, stack_b);
		reverse_rotate_stack_a_radix(a, stack_a);
	}
	else if (b[0] > a[3])
		parameters(a, b, stack_a, stack_b);
}

	/* -- the sorting of the stacks with 5 digits -- */

void	sort_5_num(long *a, long *b, int *stack_a, int *stack_b)
{
	ft_stack_pb(a, b, stack_a, stack_b);
	ft_stack_pb(a, b, stack_a, stack_b);
	sort_3_num(a, stack_a);
	while (*stack_b != 0)
	{
		if (stack_a[1] == 3)
		{	
			first_stack(a, b, stack_a, stack_b);
		}
		else if (stack_a[1] == 4)
		{
			second_stack(a, b, stack_a, stack_b);
		}
	}
}
