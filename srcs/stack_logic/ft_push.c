/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:31:04 by jklein            #+#    #+#             */
/*   Updated: 2022/07/21 22:02:42 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/* -- this function will push the a & b stack
	 		to an assending order, 
		   this is the logic of my code	-- */

#include "../headers/push_swap.h"

	/* -- the output of this function is "pa" -- */

void	ft_stack_pa(long *a, long *b, int *stack_a, int *stack_b)
{
	int	stack00;

	(stack_a[1])++;
	stack00 = stack_a[1] - 1;
	while (stack00 > 0)
	{
		a[stack00] = a[stack00 - 1];
		stack00--;
	}
	a[0] = b[0];
	stack00 = 0;
	while (stack00 < *stack_b)
	{
		b[stack00] = b[stack00 + 1];
		stack00++;
	}
	(*stack_b)--;
	if (*stack_b == 0)
		b = NULL;
	write(1, "pa\n", 3);
}

	/* -- the output of this function is "pb" -- */

void	ft_stack_pb(long *a, long *b, int *stack_a, int *stack_b)
{
	int	stack00;

	(*stack_b)++;
	stack00 = *stack_b - 1;
	while (stack00 > 0)
	{
		b[stack00] = b[stack00 - 1];
		stack00--;
	}
	b[0] = a[0];
	stack00 = 0;
	while (stack00 < stack_a[1])
	{
		a[stack00] = a[stack00 + 1];
		stack00++;
	}
	(stack_a[1])--;
	if (stack_a[1] == 0)
		a = NULL;
	write(1, "pb\n", 3);
}
