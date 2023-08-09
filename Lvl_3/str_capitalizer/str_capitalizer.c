/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viny <viny@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:02:03 by viny              #+#    #+#             */
/*   Updated: 2023/08/09 16:02:05 by viny             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	str_capitalizer(char *str)
{
	int	i;

	i = 0;
	while (!(str[i] >= 65 && str[i] <= 90 || (str[i] >= 97 && str[i] <= 122)))
		i++;
	if (str[i] >= 97 && str[i] <= 122)
		str[i] = str[i] - 32;
	i++;
	while(str[i])
	{
		if (str[i] >='A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] == ' '
				|| str[i - 1] == '\t'))
			str[i] = str[i] - 32;
		i++;
	}	
}

int main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc <= 1)
		ft_putchar('\n');
	if (argc > 1)
	{
		while (i < argc)
		{
			str_capitalizer(argv[i]);
			ft_putstr(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
}