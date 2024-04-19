/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samcasti <samcasti@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 11:57:56 by samcasti          #+#    #+#             */
/*   Updated: 2024/04/18 11:57:59 by samcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/* #include <stdio.h>

int	main(void)
{
	int a = 5;
	int b = 10;
	ft_swap(&a, &b);
	printf("a: %d, b: %d", a, b);
	return (0);
} */
