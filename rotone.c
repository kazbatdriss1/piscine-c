/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikazbat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:37:01 by ikazbat           #+#    #+#             */
/*   Updated: 2023/09/07 16:01:01 by ikazbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc , char **argv)
{
	int i;

	i = 0;
	if(argc == 2 )
	{
		while(argv[1][i] != '\0')
		{
			if((argv[1][i] >= 'a' && argv[1][i] <= 'y') || (argv[1][i] >= 'A'  && argv[1][i] <= 'Y' ))
				argv[1][i] += 1;
			else if (argv[1][i] == 'z' || argv[1][i] == 'Z')
				argv[1][i] -= 25;
			write(1,&argv[1][i],1);
			i++;
		}
	}
	write(1,"\n",1);
	return 0;
}
