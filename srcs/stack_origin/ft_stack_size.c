/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:47:16 by jklein            #+#    #+#             */
/*   Updated: 2022/07/21 22:52:50 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/* -- this function controlls the stack size -- */

#include "../headers/push_swap.h"

int	stack_size(int argc, char **argv)
{
	int	stack;
	int	size;

	stack = 0;
	size = 1;
	if (argc == 2)
	{
		while (argv[1][stack])
		{
			if (argv[1][stack] == 32)
				size++;
			stack++;
		}
	}
	else
		size = argc - 1;
	return (size);
}
