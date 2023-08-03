/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viny <viny@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 17:03:56 by viny              #+#    #+#             */
/*   Updated: 2023/08/03 17:04:53 by viny             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while(str[i])
		i++;
	return (i);
}

int ft_count_maj(char *str)
{
    int i;
    int count;

	i = 0;
	count = 0;
	while(str[i])
	{
		if (str[i] >= 64 && str[i] <= 90)
			count++;
		i++;
	}
}

char	*ft_maj_to_min(char *str)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	dest = malloc(sizeof(ft_strlen(str) + ft_count_maj(str) + 1));
	while (str[i])
	{
		if (str[i] >= 64 && str[i] <= 90)
		{
			dest[j] = '_';
			j++;
			str[i] = str[i] + 32;
		}
		dest[j] = str[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

/*
	@brief	-> Renvoyer une chaine avec un '-' juste avant chaque Majuscule
			-> chaque majuscule est transformer en min
	
	1) allouer la memoire en fonction de de la taille et du nombre de maj dans la chaine
	2)Creer une nouvelle chaine
	3)copier chaque char jusqua atteindre une Majuscule
	4)une fois la majuscule atteinte on place '-' dans la chaine de dest
	5)on avance de 1 dans la dest
    6)on remplace le char en min dans la source 
*/

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putstr(ft_maj_to_min(argv[1]));
	}
	ft_putchar('\n');
	return (0);
}