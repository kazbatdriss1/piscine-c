/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikazbat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 11:44:23 by ikazbat           #+#    #+#             */
/*   Updated: 2023/09/02 17:55:57 by ikazbat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strnb(char *sr)
{
	unsigned int	n;

	n = 0;
	while (sr[n] != '\0')
	{
		n++;
	}
	return (n);
}

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	rx;

	i = 0;
	rx = ft_strnb(src);
	if (size >= 1)
	{
		while (src[i] != '\0' && i <= size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (rx);
}
