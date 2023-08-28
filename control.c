/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykilicar <ykilicar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:13:16 by ykilicar          #+#    #+#             */
/*   Updated: 2023/08/28 18:13:20 by ykilicar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	error_message(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int	have_same_number(t_list *data)
{
	int	a;
	int	b;

	a = 0;
	while (a < data->size_a)
	{
		b = a + 1;
		while (b < data->size_a)
		{
			if (data->stack_a[a] == data->stack_a[b])
			{
				write(2, "Error\n", 6);
				exit(0);
			}
			else
				b++;
		}
		a++;
	}
	return (1);
}

int	sort_is_line(t_list *data)
{
	int	i;

	i = 0;
	while (i < data->size_a - 1)
	{
		if (data->stack_a[i] < data->stack_a[i + 1])
			i++;
		else
			return (0);
	}
	exit(0);
}
