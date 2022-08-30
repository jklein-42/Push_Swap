/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:32:15 by jklein            #+#    #+#             */
/*   Updated: 2022/07/21 22:07:53 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/* -- this function will rotate the a & b stack
	 	    to an assending order,
		   this	is the logic of my code -- */

#include "../headers/push_swap.h"

	/* -- the output of this function is "ra" -- */

void	ft_stack_ra(long *a, int *stack_a)
{
	int		stack00;
	long	*temporary;

	stack00 = 0;
	temporary = (long *)malloc(sizeof(long));
	*temporary = a[0];
	while (stack00 < stack_a[1])
	{
		a[stack00] = a[stack00 + 1];
		stack00++;
	}
	a[stack_a[1] - 1] = *temporary;
	free(temporary);
	write(1, "ra\n", 3);
}

	/* -- the output to this function is "rb" -- */

void	ft_stack_rb(long *b, int *stack_b)
{
	int		stack00;
	long	*temporary;

	stack00 = 0;
	temporary = (long *)malloc(sizeof(long));
	*temporary = b[0];
	while (stack00 < *stack_b)
	{
		b[stack00] = b[stack00 + 1];
		stack00++;
	}
	b[*stack_b - 1] = *temporary;
	free(temporary);
	write(1, "rb\n", 3);
}

	/* -- the output of this function is "r a&b" -- */

void	ft_stack_rr(long *a, long *b, int *stack_a, int *stack_b)
{
	int		stack00;
	long	*temporary;

	stack00 = 0;
	temporary = (long *)malloc(sizeof(long));
	*temporary = a[0];
	while (stack00 < stack_a[1])
	{
		a[stack00] = a[stack00 + 1];
		stack00++;
	}
	a[stack_a[1] - 1] = *temporary;
	stack00 = 0;
	*temporary = b[0];
	while (stack00 < *stack_b)
	{
		b[stack00] = b[stack00 + 1];
		stack00++;
	}
	b[*stack_b - 1] = *temporary;
	free(temporary);
	write(1, "r a&b\n", 5);
}
