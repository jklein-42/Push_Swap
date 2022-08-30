/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:32:30 by jklein            #+#    #+#             */
/*   Updated: 2022/07/21 22:11:51 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/* -- this function will swap a & b stack
	 	   to an assending order,
		  this is the logic of my code -- */

#include "../headers/push_swap.h"

	/* -- the output of this function is "sa" -- */

void	ft_stack_sa(long *a, int *stack_a)
{
	long	*temporary;

	temporary = (long *)malloc(sizeof(long));
	if (stack_a[1] > 1)
	{
		temporary[0] = a[0];
		a[0] = a[1];
		a[1] = temporary[0];
	}
	free(temporary);
	write(1, "sa\n", 3);
}

	/* -- the output of this function is "sb" -- */

void	ft_stack_sb(long *b, int *stack_b)
{
	long	*temporary;

	temporary = (long *)malloc(sizeof(long));
	if (*stack_b > 1)
	{
		temporary[0] = b[0];
		b[0] = b[1];
		b[1] = temporary[0];
	}
	free(temporary);
	write(1, "sb\n", 3);
}

	/* -- the output of this function is "s a&b" -- */

void	ft_stack_ss(long *a, long *b, int *stack_a, int *stack_b)
{
	long	*temporary;

	temporary = (long *)malloc(sizeof(long));
	if (stack_a[1] > 1)
	{
		temporary[0] = a[0];
		a[0] = a[1];
		a[1] = temporary[0];
	}
	if (*stack_b > 1)
	{
		temporary[0] = b[0];
		b[0] = b[1];
		b[1] = temporary[0];
	}
	free(temporary);
	write(1, "s a&b\n", 5);
}
