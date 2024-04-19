/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samcasti <samcasti@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:05:16 by samcasti          #+#    #+#             */
/*   Updated: 2024/04/18 12:05:20 by samcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*arr;
	int	i;

	size = max - min;
	i = 0;
	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);
	if (min >= max)
		return (NULL);
	while (i < size)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int min;
// 	int max;
// 	int i;

// 	i = 0;
// 	min = 10;
// 	max = 20;
// 	while (i < max - min)
// 	{
// 		printf("%d ", ft_range(min, max)[i]);
// 		i++;
// 	}
// 	return (0);
// }
