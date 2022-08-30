/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_stack_sorted.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:41:05 by jklein            #+#    #+#             */
/*   Updated: 2022/07/21 22:20:04 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/* -- this function sorts the stack -- */

#include "../headers/push_swap.h"

int	is_stack_sorted(long *a, int *stack_a)
{
	int		stack00;
	int		stack01;
	long	max;

	stack00 = 1;
	stack01 = 0;
	max = a[0];
	while (stack00 < stack_a[1])
	{
		if (a[stack00] > max)
		{
			max = a[stack00];
			stack01++;
		}
		stack00++;
	}
	if (stack01 == stack_a[1] - 1)
		return (0);
	return (-1);
}
