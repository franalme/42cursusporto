/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 15:43:34 by franalme          #+#    #+#             */
/*   Updated: 2023/01/10 15:43:35 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	digits(long int n)
{
	long int	i;

	i = 1;
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long int	temp;
	int			len;
	char		*res;
	int			i;

	res = NULL;
	temp = n;
	len = digits(temp);
	if (temp < 0)
	{
		temp = -temp;
		len ++;
	}
	res[len] = '\0';
	i = len - 1;
	while (i >= 0)
	{
		res[i] = (temp % 10) + '0';
		temp /= 10;
		i--;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}
