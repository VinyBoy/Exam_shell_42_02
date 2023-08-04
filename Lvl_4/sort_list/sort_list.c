/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viny <viny@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 21:05:56 by viny              #+#    #+#             */
/*   Updated: 2023/08/04 21:07:16 by viny             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

#include <unistd.h>

t_list *sort_list(t_list *lst, int (*cmp)(int , int))

{
    int   temp;
    t_list  *start;

    start = lst;
    while(lst->next != NULL)
    {
        if(((*cmp)(lst->data, lst->next->data)) == 0)
        {
            temp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = temp;
			lst = start;
        }
        else
			lst = lst->next;
    }
    lst = start;
    return (lst);
}
