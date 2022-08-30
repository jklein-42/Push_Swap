/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_3_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 20:44:35 by jklein            #+#    #+#             */
/*   Updated: 2022/07/21 22:39:15 by jklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	/* -- this function sorts the numbers of count 3 -- */

#include "../headers/push_swap.h"

void	sort_3_num(long *sa, int *a)
{
	if ((sa[0] > sa[1]) && (sa[1] < sa[2]) && (sa[0] < sa[2]))
	{
		ft_stack_sa(sa, a);
	}
	if ((sa[0] > sa[1]) && (sa[1] > sa[2]) && (sa[0] > sa[2]))
	{
		ft_stack_sa(sa, a);
		ft_stack_rra(sa, a);
	}
	if ((sa[0] > sa[1]) && (sa[1] < sa[2]) && (sa[0] > sa[2]))
	{
		ft_stack_ra(sa, a);
	}
	if ((sa[0] < sa[1]) && (sa[1] > sa[2]) && (sa[0] < sa[2]))
	{
		ft_stack_sa(sa, a);
		ft_stack_ra(sa, a);
	}
	if ((sa[0] < sa[1]) && (sa[1] > sa[2]) && (sa[0] > sa[2]))
	{
		ft_stack_rra(sa, a);
	}
}
