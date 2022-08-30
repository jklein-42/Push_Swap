/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stacks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:40:21 by jklein            #+#    #+#             */
/*   Updated: 2022/07/21 22:17:52 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/* -- this function will free the stack -- */

#include "../headers/push_swap.h"

void	free_stacks(long *a, long *b, int *stack_a, int *stack_b)
{
	free(a);
	free(b);
	free(stack_a);
	free(stack_b);
	exit(0);
}
