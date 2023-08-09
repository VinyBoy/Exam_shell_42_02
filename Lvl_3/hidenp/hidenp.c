/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viny <viny@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:58:59 by viny              #+#    #+#             */
/*   Updated: 2023/08/07 12:59:25 by viny             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while(str[i])
        i++;
    return (i);
}
/*
    prend deux chaines
    -> renvoie 1 si la premiere est contenue dans la seconde
    ->renvoie 0 si la premiere n'est pas contenue dans la seconde
*/
int hidenp(char *s1, char *s2)
{
    int i;
    int j;
    int count;

    i = 0;
    j = 0;
    count = 0;
    if (!s1 || !s2)
        return (-1);
    while (s1[i])
    {
        while(s2[j])
        {
            if(s1[i] == s2[j])
            {
                count++;
                i++;
            }
            j++;
        }
        i++;
    }
    if (ft_strlen(s1) == count)
        return (1);
    else
        return (0);
}

int main(int argc, char **argv)
{
    int ret;

    if (argc == 3)
    {
        ret = hidenp(argv[1], argv[2]);
        ft_putchar(ret + 48);
    }
    ft_putchar('\n');
}