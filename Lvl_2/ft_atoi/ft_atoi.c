/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viny <viny@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 14:25:16 by viny              #+#    #+#             */
/*   Updated: 2023/08/04 14:25:38 by viny             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
    int signe;
    int result;

    signe = 1;
    result = 0;
    while(*str)
    {
        while (*str == 32 || *str >= 9 && *str <= 13)
            str++;
        if (*str == '-')
            signe *= -1;
        if (*str == '-' || *str == '+')
            str++;
        while (*str >= 48 && *str <= 57)
        {
            result = result * 10 + (*str - 48);
            str++;
        }
        return (result * signe);
    }
}