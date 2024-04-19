/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samcasti <samcasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:09:29 by samcasti          #+#    #+#             */
/*   Updated: 2024/04/19 14:05:07 by samcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// #include <string.h>
int	*f(char *tab);

int	array_length(char *array[])
{
	int	length;

	length = 0;
	while (array[length] != NULL && array[length][0] != '\0')
	{
		length++;
	}
	return (length);
}

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	i;
	int	count;
	int	length;

	i = 0;
	count = 0;
	length = array_length(tab);
	while (i < length)
	{
		if (f(tab[i]) == 1)
		{
			count++;
		}
		i++;
	}
	return (count);
}

// int	ft_str_is_uppercase(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i] != '\0')
// 	{
// 		if (str[i] < 65 || str[i] > 90)
// 		{
// 			return (0);
// 		}
// 		i++;
// 	}
// 	return (1);
// }

// int	main(void)
// {
// 	char	*arr[] = {"HI", "bye", "Go", "more", "AND", 0};

// 	// Added NULL terminator
// 	printf("%d\n", ft_count_if(arr, ft_str_is_uppercase));
// 	return (0);
// }
