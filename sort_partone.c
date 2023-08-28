/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_partone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykilicar <ykilicar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:14:06 by ykilicar          #+#    #+#             */
/*   Updated: 2023/08/28 18:14:08 by ykilicar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	two_sort(t_list *data)
{
	if (data->stack_a[0] > data->stack_a[1])
		swap_sa(data);
}

void	three_sort(t_list *data)
{
	if (data->stack_a[0] > data->stack_a[1]
		&& data->stack_a[1] > data->stack_a[2])
	{
		swap_sa(data);
		swap_rra(data);
	}
	else if (data->stack_a[0] > data->stack_a[2]
		&& data->stack_a[2] > data->stack_a[1])
		swap_ra(data);
	else if (data->stack_a[1] > data->stack_a[0]
		&& data->stack_a[0] > data->stack_a[2])
	{
		swap_rra(data);
	}
	else if (data->stack_a[1] > data->stack_a[2]
		&& data->stack_a[2] > data->stack_a[0])
	{
		swap_sa(data);
		swap_ra(data);
	}
	else if (data->stack_a[2] > data->stack_a[0]
		&& data->stack_a[0] > data->stack_a[1])
	{
		swap_sa(data);
	}
}
