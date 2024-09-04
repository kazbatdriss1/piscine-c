/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikazbat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:14:18 by ikazbat           #+#    #+#             */
/*   Updated: 2023/09/07 11:32:03 by ikazbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char    *ft_strrev(char *str)
{
	int	i;
	int	len;
	char	swp;

	i = 0;
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	len--;
	while (i <= len / 2)
	{
		swp = str[i];
		str[i] = str[len - i];
		str[len - i] = swp;
		i++;
	}
	return (str);
}

int main()
{
	int i = 0;
	char str[] = "naassah aw";

	char *p = ft_strrev(str);
	while (p[i] != '\0')
	{
		write(1,&p[i],1);
		i++;
	}
	return 0;
}
