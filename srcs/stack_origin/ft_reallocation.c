/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reallocation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:43:49 by jklein            #+#    #+#             */
/*   Updated: 2022/07/21 22:25:36 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/* -- this function shiffs the stack to its location -- */

#include "../headers/push_swap.h"

void	ft_reallocation(long *ptr, int size, int new_size)
{
	int		stack;
	long	*temporary;

	stack = 0;
	if ((ptr != NULL) && (size < new_size))
	{
		temporary = malloc(sizeof(long) * (new_size));
		while (stack < size)
		{
			temporary[stack] = ptr[stack];
			stack++;
		}
		ptr = temporary;
	}
	else if ((ptr != NULL) && (size > new_size))
	{
		temporary = malloc(sizeof(long) * (new_size));
		while (stack < new_size)
		{
			temporary[stack] = ptr[stack];
			stack++;
		}
		ptr = temporary;
	}
}
