/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:59:27 by franalme          #+#    #+#             */
/*   Updated: 2022/12/20 16:59:27 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *str, const char *wrd, size_t len)
{
    size_t d;
	size_t p;

    d = 0;
	if (wrd[0] == '\0')
		return ((char *)str);
	while (str[d] != '\0')
	{
		p = 0;
		while (str[d + p] == wrd[p] && (d + p) < len)
		{
			if (str[d + p] == '\0' && wrd[p] == '\0')
				return ((char *)&str[p]);
			p++;
		}
		if (wrd[p] == '\0')
			return ((char *)str + d);
		d++;
	}
	return (0);
}
#include <stdio.h>
#include <string.h>

int main()
{
    char *haystack = "Was this the face that launch'd a thousand ships";
    char *needle = "face";
    char *location;

    location = ft_strnstr(haystack,needle,5);
    if( location == NULL)
        perror("String not found");
    else
    {
        printf("String '%s' was found at position %d in string '%s'.\n",
            needle,
            (int)location-(int)haystack+1,
            haystack);
    }

    return(0);

}
