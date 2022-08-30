/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_seperate_numbers.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:44:18 by jklein            #+#    #+#             */
/*   Updated: 2022/07/21 22:37:35 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/* -- this function will have controll over sorting the numbers
	 		in the stacks of this program, it will inline the
		   sorces code and statments of this function -- */

#include "../headers/push_swap.h"

	/* -- this function will free the stack -- */

void	free_string(char **str)
{
	int	stack;

	stack = 0;
	while (str[stack])
	{
		free(str[stack]);
		stack++;
	}
}

	/* -- this will controll the  number input to the code -- */

int	numbers_input(long *a, int *stack_a, char **argv, char**list)
{
	int	stack;
	int	numbers;

	stack = 0;
	numbers = 0;
	list = ft_split(argv[1], 32);
	while (list[stack])
	{
		numbers++;
		stack++;
	}
	stack_a[0] = numbers;
	stack_a[1] = stack_a[0];
	stack = 0;
	while (stack < stack_a[0])
	{
		a[stack] = ft_atoi(list[stack]);
		stack++;
	}
	free_string(list);
	free(list);
	return (0);
}

	/* -- this part of the code will put data into the stack -- */

int	standard_input(long *a, int *stack_a, char **argv)
{
	int	stack;

	stack = 0;
	while (stack < stack_a[1])
	{
		if (only_num_in_stack(argv[stack + 1]) == 1)
			a[stack] = ft_atoi(argv[stack + 1]);
		else
		{
			write(1, "Error\n", 6);
			return (-1);
		}
		stack++;
	}
	return (0);
}

	/* -- the input of this code will place stacks -- */

int	seperating_input_num(long *a, int *stack_a, char **argv)
{
	char	**list;

	list = NULL;
	if (stack_a[0] == 1)
	{
		if (numbers_input(a, stack_a, argv, list) == -1)
			return (-1);
	}
	else
	{
		if (standard_input(a, stack_a, argv) == -1)
			return (-1);
	}
	if (repeated_num(a, stack_a[1]) == -1)
		return (-1);
	if (num_limit(a, stack_a[1] == -1))
		return (-1);
	return (0);
}
