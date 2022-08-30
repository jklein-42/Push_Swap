/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:31:59 by jklein            #+#    #+#             */
/*   Updated: 2022/07/21 21:26:41 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	ft_stack_rra(long *a, int *stack_a)
{
	int		stack00;
	long	*temporary;

	stack00 = stack_a[1] - 1;
	temporary = (long *)malloc(sizeof(long));
	*temporary = a[stack_a[1] - 1];
	while (stack00 > 0)
	{
		a[stack00] = a[stack00 - 1];
	stack00--;
	}
	a[0] = *temporary;
	free(temporary);
	write(1, "rra\n", 4);
}

void	ft_stack_rrb(long *b, int *stack_b)
{
	int		stack00;
	long	*temporary;

	stack00 = *stack_b - 1;
	temporary = (long *)malloc(sizeof(long));
	*temporary = b[*stack_b - 1];
	while (stack00 > 0)
	{
		b[stack00] = b[stack00 - 1];
		stack00--;
	}
	b[0] = *temporary;
	free(temporary);
	write(1, "rrb\n", 4);
}

void	ft_stack_rrr(long *a, long *b, int *stack_a, int *stack_b)
{
	int		stack00;
	long	*temporary;

	stack00 = stack_b[1] - 1;
	temporary = (long *)malloc(sizeof(long));
	*temporary = a[stack_a[1] - 1];
	while (stack00 > 0)
	{
		a[stack00] = a[stack00 - 1];
		stack00--;
	}
	a[0] = *temporary;
	stack00 = 0;
	*temporary = b[0];
	while (stack00 < *stack_b)
	{
		b[stack00] = b[stack00 + 1];
		stack00++;
	}
	b[*stack_b - 1] = *temporary;
	free(temporary);
	write(1, "rr a&b\n", 6);
}
