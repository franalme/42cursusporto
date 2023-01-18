/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: franalme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:15:11 by franalme          #+#    #+#             */
/*   Updated: 2023/01/17 18:15:12 by franalme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef BUFFER_SIZE = 42
# define BUFFER_SIZE = 42

# include <stdlib.h>
# include <unistd.h>


void	*ft_bzero(void *str, int n);
char	*ft_strchr(const char *str, int c);
void	*ft_calloc(size_t nitems, size_t size);
char	*ft_strjoin(char const *s1, char const *s2);
size_t	ft_strlen(const char *c);
char	*get_next_line(int fd);

#endif
#endif
