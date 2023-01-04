/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 10:23:58 by franalme          #+#    #+#             */
/*   Updated: 2023/01/04 10:23:59 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstlen)
{
	size_t	i;

	i = 0;
	while (*src && i + 1 < dstlen)
	{
		*dst++ = *src++;
		++i;
	}
	if (i < dstlen)
		*dst = 0;
	while (*src++)
		++i;
	return (i);
}

#include <stdio.h>
#include <string.h>

void test(int size)
{
    char string[] = "Hello there, Venus";
    char buffer[19];
    int s;

    // r = strlcpy(buffer,string,size);

    // printf("Copied '%s' into '%s', length %d\n",
    //         string,
    //         buffer,
    //         r
    //       );
    
    s = ft_strlcpy(buffer,string,size);

    printf("Copied '%s' into '%s', length %d\n",
            string,
            buffer,
            s
          );

}

int main()
{
    test(19);
    test(10);
    test(1);
    test(0);

    return(0);
}