/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:04:12 by tpuma             #+#    #+#             */
/*   Updated: 2022/09/25 17:41:19 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include<stdio.h>
# include<unistd.h>
# include<ctype.h>
# include<stdlib.h> /* Funciones de ficheros, Funciones write() y close()*/
# include<string.h>
# include<stddef.h>
# include<sys/types.h>
# include<sys/stat.h>
# include <fcntl.h> /* Modos de apertura y función open()*/
# include<errno.h>
# include <stdarg.h>
# include <limits.h>

char	*get_next_line(int fd);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlen(const char *s);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strjoin(char const *s1, char const *s2);

#endif
