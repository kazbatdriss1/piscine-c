/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikazbat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 09:32:04 by ikazbat           #+#    #+#             */
/*   Updated: 2023/09/07 10:27:04 by ikazbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return(i);
}
char	*ft_rev_print (char *str)
{
	int i;

	i = ft_strlen(str) - 1;
	while (i >= 0 )
	{
		write(1, &str[i],1);
		i--;
	}
	write(1,"\n",1);
	return (str);
}

int main()
{
	char tb[]= "";
	ft_rev_print(tb);
	return 0;
}
