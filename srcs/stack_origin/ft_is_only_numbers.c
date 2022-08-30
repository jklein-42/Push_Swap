/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_only_numbers.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:40:50 by jklein            #+#    #+#             */
/*   Updated: 2022/07/21 22:18:40 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/* -- this function will holds a number in a stack -- */

#include "../headers/push_swap.h"

int	only_num_in_stack(char *numbers)
{
	int	stack;
	int	minus;

	stack = 0;
	minus = 0;
	while (numbers[stack])
	{
		if (numbers[stack] == 45)
			minus++;
		else if (ft_isdigit(numbers[stack]) == 0)
			return (0);
		stack++;
	}
	if (minus > 1)
		return (0);
	return (1);
}
