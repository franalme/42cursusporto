/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:14:36 by franalme          #+#    #+#             */
/*   Updated: 2022/12/12 16:14:37 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_isprint (int c)
{
	return (c >= 32   && c <= 126);
}


#include <ctype.h>
#include <stdio.h>

int main()
{
    char c;

    c = 'Q';
    printf("Result when a printable character %c is passed to isprint(): %d", c, isprint(c));

    c = '\n';
    printf("\nResult when a control character %c is passed to isprint(): %d", c, isprint(c));
   
    c = 'Q';
    printf("\nResult when a printable character %c is passed to isprint(): %d", c, ft_isprint(c));

    c = '\n';
    printf("\nResult when a control character %c is passed to isprint(): %d", c, ft_isprint(c));

    return 0;
}
