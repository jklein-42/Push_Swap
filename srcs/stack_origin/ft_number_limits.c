/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number_limits.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:41:38 by jklein            #+#    #+#             */
/*   Updated: 2022/07/21 22:22:02 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/* -- this function holds the number limit of the program -- */

#include "../headers/push_swap.h"

int	num_limit(long *a, int stack_a)
{
	int	stack;

	stack = 0;
	while (stack < stack_a)
	{
		if ((a[stack] > 2147483647) || (a[stack] < -2147483648))
		{
			write(1, "Error\n", 6);
			return (-1);
		}
		stack++;
	}
	return (0);
}
