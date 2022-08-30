/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_repeated_numbers.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:44:06 by jklein            #+#    #+#             */
/*   Updated: 2022/07/21 22:27:50 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/* -- this function calls an errer in the code -- */

#include "../headers/push_swap.h"

	/* -- this function output is "Error" -- */

int	repeated_num(long *a, int stack_a)
{
	int	stack00;
	int	stack01;

	stack00 = 0;
	stack01 = 0;
	while (stack00 < stack_a)
	{
		stack01 = 0;
		while (stack01 < stack_a)
		{
			if ((a[stack00] == a[stack01]) && (stack00 != stack01))
			{
				write(1, "Error\n", 6);
				return (-1);
			}
			stack01++;
		}
		stack00++;
	}
	return (0);
}
