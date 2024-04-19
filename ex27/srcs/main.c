/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samcasti <samcasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:11:28 by samcasti          #+#    #+#             */
/*   Updated: 2024/04/19 18:02:09 by samcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(2, "File name missing.", 18);
		write(1, "\n", 1);
		return (1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.", 19);
		write(1, "\n", 1);
		return (1);
	}
	if (ft_display_file(argv[1]) == 1)
	{
		write(2, "Cannot read file.", 17);
		write(1, "\n", 1);
		return (1);
	}
	return (0);
}
