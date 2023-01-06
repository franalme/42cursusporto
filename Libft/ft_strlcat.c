/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:57:53 by franalme          #+#    #+#             */
/*   Updated: 2022/12/20 16:57:54 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstlen)
{
	size_t	i;
    size_t  j;
    int aux;

	i = 0;
	while (*dst && i < dstlen)
	{
        dst++;
        i++;
    }
    aux = dstlen - i;
	j = ft_strlcpy(dst, src, aux) + i;
	return (j);
}

#include <stdio.h>
#include <string.h>

int main()
{
	char first[] = "This is ";
	char last[] = "a potentially long string";
	int r;
	int size = 16;
	char buffer[size];

	ft_strcpy(buffer,first);
	r = ft_strlcat(buffer,last,size);

	puts(buffer);
	printf("Value returned: %d\n",r);
	if( r > size )
		puts("String truncated");
	else
		puts("String was fully copied");

	return(0);
}