/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 00:56:03 by franalme          #+#    #+#             */
/*   Updated: 2023/01/10 00:56:04 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int			i;
	const char	*temp;

	temp = str;
	i = ft_strlen(str);
	str = (str + i);
	while (*str != *temp && c != *str)
		str--;
	if (c == *str)
		return ((char *)str);
	return (0);
}
