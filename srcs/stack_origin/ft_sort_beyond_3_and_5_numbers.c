/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_beyond_3_and_5_numbers.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:46:35 by jklein            #+#    #+#             */
/*   Updated: 2022/07/21 22:51:53 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/* -- this function will sort stacks with numbers beyond 3 & 5,
	 		all the larger number input gets sorted in this code  -- */

#include "../headers/push_swap.h"

	/* -- the selection of code is controlled here -- */

void	sort_stack_selection(long *array, int *size)
{
	long	stack00;
	long	stack01;
	long	temporary;

	stack00 = 0;
	stack01 = 0;
	while (stack00 < size[0])
	{
		stack01 = stack00 + 1;
		while (stack01 < size[0])
		{
			if (array[stack00] > array[stack01])
			{
				temporary = array[stack00];
				array[stack00] = array[stack01];
				array[stack01] = temporary;
			}
			stack01++;
		}
		stack00++;
	}
}

	/* -- the first stack being sorted -- */

void	first_stack_swap(long *copy, long *copy_swap_a, long *a, int *stack_a)
{
	int	stack;

	stack = 0;
	while (stack < stack_a[0])
	{
		copy[stack] = a[stack];
		copy_swap_a[stack] = a[stack];
		stack++;
	}
}

	/* -- the second stack being sorted -- */

void	second_stack_swap(long *copy, long *copy_swap_a, long *a, int *stack_a)
{
	int	stack00;
	int	stack01;

	stack00 = 0;
	stack01 = 0;
	while (stack00 < stack_a[1])
	{
		stack01 = 0;
		while (stack01 < stack_a[0])
		{
			if (copy_swap_a[stack00] == copy[stack01])
					a[stack00] = stack01;
			stack01++;
		}
		++stack00;
	}
}

	/* -- the second stack being sorted -- */

void	third_stack_swap(long *a, long *b, int *stack_a, int *stack_b)
{
	int	maximum_number;
	int	maximum_bits;
	int	loop_through[2];

	maximum_number = stack_a[1] - 1;
	maximum_bits = 0;
	loop_through[0] = 0;
	loop_through[1] = 0;
	while ((maximum_number >> maximum_bits) != 0)
		++maximum_bits;
	while (loop_through[0] < maximum_bits)
	{
		loop_through[1] = 0;
		while (loop_through[1] < stack_a[0])
		{
			if (((a[0] >> loop_through[0]) & 1) == 1)
				ft_stack_ra(a, stack_a);
			else
				ft_stack_pb(a, b, stack_a, stack_b);
			++loop_through[1];
		}
		while (*stack_b != 0)
			ft_stack_pa(a, b, stack_a, stack_b);
		++loop_through[0];
	}
}

	/* -- the larger numbers is collected and sorted here -- */

void	num_larger_3_5(long *a, long *b, int *stack_a, int *stack_b)
{
	long	*copy;
	long	*copy_swap_a;

	copy = (long *)malloc(stack_a[0] * sizeof(long));
	copy_swap_a = (long *)malloc(stack_a[0] * sizeof(long));
	first_stack_swap(copy, copy_swap_a, a, stack_a);
	sort_stack_selection(copy, stack_a);
	second_stack_swap(copy, copy_swap_a, a, stack_a);
	free(copy);
	free(copy_swap_a);
	third_stack_swap(a, b, stack_a, stack_b);
}
