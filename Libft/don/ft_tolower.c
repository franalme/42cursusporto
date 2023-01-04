/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:58:23 by franalme          #+#    #+#             */
/*   Updated: 2022/12/20 16:58:24 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int i)
{
	if (i >= 'A' && i <= 'Z')
		return (i = i + 32);
	else
		return (i);
}

#include <stdio.h>
#include <ctype.h>
int main() {
    char c;

    c = 'm';
    printf("%c -> %c", c, tolower(c));

    c = 'D';
    printf("\n%c -> %c", c, tolower(c));

    c = '9';
    printf("\n%c -> %c\n", c, tolower(c));

    c = 'm';
    printf("%c -> %c", c, ft_tolower(c));

    c = 'D';
    printf("\n%c -> %c", c, ft_tolower(c));

    c = '9';
    printf("\n%c -> %c", c, ft_tolower(c));
    return 0;
}

