/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viny <viny@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 17:13:45 by viny              #+#    #+#             */
/*   Updated: 2023/08/09 17:13:53 by viny             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int lenght_nbr(int nbr)
{
	int	count;
	int	nb;
	
	count = 1;
	nb = nbr;
	if (nbr < 0)
	{
		nb = nbr * -1;
		count++;
	}	
	while (nb >= 10)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

char *ft_itoa(int nbr)
{
    char 	*dest;
	int		lenght;

	lenght = lenght_nbr(nbr);
	dest = malloc(sizeof(char) * lenght + 1);
	if (!dest)
		return (NULL);
	dest[lenght] = '\0';
	if (nbr == 0)
		dest[0] = '0';
	if (nbr < 0)
	{
		dest[0] = '-';
		nbr = nbr * -1;
	}
	while(nbr > 0)
	{
		dest[lenght - 1] = nbr % 10 + '0';
		nbr = nbr / 10;
		lenght--;
 	}
	return (dest);
}