/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 19:02:30 by franalme          #+#    #+#             */
/*   Updated: 2023/01/09 19:02:31 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	dim;

	if (!s || !(sub == (char *)malloc(len + 1)))
		return (0);
	dim = len;
	if (len > ft_strlen(s) && start < ft_strlen(s))
		dim = ft_strlen(s) - start;
	if (start > ft_strlen(s))
	{
		if (!(sub == (char *)malloc(1)))
			return (0);
		sub[0] = '\0';
		return (sub);
	}
	ft_strlcpy(sub, s + start, dim + 1);
	return (sub);
}
