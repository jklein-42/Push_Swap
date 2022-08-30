/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 22:10:50 by jklein            #+#    #+#             */
/*   Updated: 2022/07/21 21:56:06 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/* -- this function is the main program clang operatior,
	 		 it will use the code in the directory to run 
			a function called push_swap,
		  
		this process will sort numbers in a assending order	-- */

#include "srcs/headers/push_swap.h"

	/* -- this function will free the program -- */

void	free_and_exit(int *stack_a, int *stack_b)
{
	free(stack_a);
	free(stack_b);
	exit(0);
}

/* -- this function will return Error if the process fails -- */

void	free_and_exit_no_errors(int *stack_a, int *stack_b)
{
	free(stack_a);
	free(stack_b);
	write(1, "Error\n", 6);
	exit(0);
}

	/* -- this is source code to check the parameters --*/

void	check_parameters(int argc, char **argv, int *stack_a, int *stack_b)
{
	int	in;
	int	jn;

	in = 1;
	jn = 0;
	if (argc < 2)
		free_and_exit(stack_a, stack_b);
	while (in < argc)
	{
		if ((argv[in][ft_strlen(argv[in]) - 1] == ' ') || (argv[in][0] == ' '))
			free_and_exit_no_errors(stack_a, stack_b);
		while (jn < ft_strlen(argv[in]))
		{
			if (((argv[in][jn] < 48) || (argv[in][jn] > 57))
					&& (argv[in][jn] != 32))
			{
				if (argv[in][jn] != 45)
					free_and_exit_no_errors(stack_a, stack_b);
			}
			if ((argv[in][jn] == 32) && (argv[in][jn + 1] == 32))
				free_and_exit_no_errors(stack_a, stack_b);
			jn++;
		}
		in++;
	}
}

	/* -- this part of the code will set the numbers -- */

void	set_num(int *stack_a, int *stack_b, int argc)
{
	stack_a[0] = argc - 1;
	stack_a[1] = stack_a[0];
	*stack_b = 0;
}

	/* -- the statments in this part of the code hold the 
			arguments to my function push_swap -- */

int	main(int argc, char **argv)

{
	long	*stack_a;
	long	*stack_b;
	int		*num_stack_a;
	int		*num_stack_b;

	num_stack_a = (int *)malloc(2 * sizeof(int));
	num_stack_b = (int *)malloc(sizeof(int));
	check_parameters(argc, argv, num_stack_a, num_stack_b);
	set_num(num_stack_a, num_stack_b, argc);
	stack_a = (long *)malloc(sizeof(long) * stack_size(argc, argv));
	stack_b = (long *)malloc(sizeof(long) * stack_size(argc, argv));
	if ((seperating_input_num(stack_a, num_stack_a, argv) == -1)
		|| (is_stack_sorted(stack_a, num_stack_a) == 0))
		free_stacks(stack_a, stack_b, num_stack_a, num_stack_b);
	if ((num_stack_a[1] == 2) && (stack_a[0] > stack_a[1]))
		ft_stack_ra(stack_a, num_stack_a);
	else if (num_stack_a[1] == 3)
		sort_3_num(stack_a, num_stack_a);
	else if (num_stack_a[1] == 5)
		sort_5_num(stack_a, stack_b, num_stack_a, num_stack_b);
	else
		num_larger_3_5(stack_a, stack_b, num_stack_a, num_stack_b);
	free_stacks(stack_a, stack_b, num_stack_a, num_stack_b);
	return (0);
}
