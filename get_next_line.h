/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:04:12 by tpuma             #+#    #+#             */
/*   Updated: 2022/08/28 17:51:56 by tpuma            ###   ########.fr       */
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

#endif
