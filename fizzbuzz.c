/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikazbat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:47:14 by ikazbat           #+#    #+#             */
/*   Updated: 2023/09/07 20:24:57 by ikazbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void  ft_putnb(int nb)
{
	int rus = 0;

	if (nb > 9)
	{
		ft_putnb(nb / 10);
		ft_putnb(nb % 10);
	}
	else
	{
	   rus = nb + 48;	
		write(1,&rus,1);
	}
}

int main()
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if(i % 3 == 0 && i % 5 == 0)
		{
			write(1,"fizzbuzz\n",9);
		}
		else if(i % 3 == 0)
			write(1,"fizz\n",5);
		else if(i % 5 == 0)
			write(1,"buzz\n",5);
		else
		{
			ft_putnb(i);
			write(1,"\n",1);
		}
		i++;
	}
	return 0;
}
