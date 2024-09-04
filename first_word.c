/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikazbat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 10:30:07 by ikazbat           #+#    #+#             */
/*   Updated: 2023/09/07 13:19:18 by ikazbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		while(*argv[1] && (*argv[1] == '\t' || *argv[1] == ' '))
			argv[1]++;
		while (*argv[1] && (*argv[1] != '\t' &&  *argv[1] != ' '))
		{
			write(1,argv[1]++,1);
		}
	}
	write(1,"\n",1);
	return 0;
}
