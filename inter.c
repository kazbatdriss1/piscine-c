/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikazbat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:02:18 by ikazbat           #+#    #+#             */
/*   Updated: 2023/09/07 19:46:54 by ikazbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_inter(char *ar1, char *ar2)
{
	int i;
	int tab[256] = {0};

	i = 0;
	while (ar2[i])
		tab[(int)ar2[i++]] = 1;
	i = 0;
	while (ar1[i])
	{
		if (tab[(int)ar1[i]] == 1)
		{
			write(1,&ar1[i],1);
			tab[(int)ar1[i]] = 2;
		}
		i++;
	}
}
int main(int argc , char **argv)
{
	if (argc == 3)
		print_inter(argv[1],argv[2]);
	write(1,"\n",1);
	return 0;
}

