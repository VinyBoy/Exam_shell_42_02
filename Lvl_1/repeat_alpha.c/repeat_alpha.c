/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viny <viny@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:12:25 by viny              #+#    #+#             */
/*   Updated: 2023/08/04 14:12:32 by viny             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int letter_count(char c)
{
    int repeat;

    if (c >= 65 && c <= 90)
        repeat =  c - 'A' + 1;
    else if (c >= 97 && c <= 122)
        repeat = c - 'a' + 1;
    else
        repeat = 1;
    return (repeat);
}
int main(int argc, char **argv)
{
    int repeat;

    if (argc == 2)
    {
        while(*argv[1])
        {
            repeat = letter_count(*argv[1]);
            while (repeat)
            {
                ft_putchar(*argv[1]);
                repeat--;
            }
            *argv[1]++;
        }
    }
    ft_putchar('\n');
}