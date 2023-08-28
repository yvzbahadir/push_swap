/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykilicar <ykilicar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 18:13:57 by ykilicar          #+#    #+#             */
/*   Updated: 2023/08/28 18:13:59 by ykilicar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_list *data)
{
	int	i;
	int	j;
	int	*arr;

	i = 1;
	j = 0;
	if (data->size_a)
	{
		data->size_b++;
		arr = malloc(sizeof(int) * (data->size_b) + 1);
		if (data->size_b > 1)
		{
			while (j < data->size_b)
				arr[i++] = data->stack_b[j++];
		}
		arr[0] = data->stack_a[0];
		free(data->stack_b);
		data->stack_b = arr;
		data->size_a--;
		up_side(data->stack_a, data->size_a);
		write(1, "pb\n", 3);
	}
}

void	push_a(t_list *data)
{
	int	i;
	int	j;
	int	*arr;

	i = 1;
	j = 0;
	if (data->size_a)
	{
		data->size_a++;
		arr = malloc(sizeof(int) * data->size_a + 2);
		if (data->size_a > 1)
		{
			while (j < data->size_a)
				arr[i++] = data->stack_a[j++];
			free(data->stack_a);
		}
		arr[0] = data->stack_b[0];
		up_side(data->stack_b, data->size_b);
		data->stack_a = arr;
		data->size_b--;
		write(1, "pa\n", 3);
	}
}

void	up_side(int *arr, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		arr[i] = arr[i + 1];
		i++;
	}
	arr[i] = 0;
}
