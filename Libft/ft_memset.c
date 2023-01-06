/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:56:51 by franalme          #+#    #+#             */
/*   Updated: 2022/12/20 16:56:52 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memset(void *str, int c, int n)
{
    int  i;

    i = 0;
    while (i < n)
    {
        ((unsigned char*)str)[i] = c;
        i++;
    }
    return (str);
}

#include <stdio.h>
#include <string.h>

int main () {
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   memset(str,'$',7);
   puts(str);
   ft_memset(str,'@',7);
   puts(str);
   
   return(0);
}