/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nipostni <awis@me.com>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 15:21:59 by nipostni          #+#    #+#             */
/*   Updated: 2023/04/20 18:06:43 by nipostni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <limits.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif

// int		ft_strlen(const char *s);
// char	*ft_substr(char const *s, unsigned int start, size_t len);
// char	*ft_strchr(const char *str, int c);
// char	*ft_strdup(const char *s);
// char	*ft_strjoin(char *s1, char *s2);

char	*get_next_line(int fd);

#endif