/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikazbat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 21:26:46 by ikazbat           #+#    #+#             */
/*   Updated: 2023/09/03 10:54:02 by ikazbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (argv[0][i] != '\0' && argc)
	{
		write(1, &argv[0][i], 1);
		i++;
	}
	write(1, &"\n", 1);
	return (0);
}