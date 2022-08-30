/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parameters.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:43:22 by jklein            #+#    #+#             */
/*   Updated: 2022/07/21 22:23:29 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/* -- this function hold parameters of the stack -- */

#include "../headers/push_swap.h"

void	parameters(long *a, long *b, int *stack_a, int *stack_b)
{
	ft_stack_pa(a, b, stack_a, stack_b);
	ft_stack_ra(a, stack_a);
}
