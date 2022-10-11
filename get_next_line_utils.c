/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:04:17 by tpuma             #+#    #+#             */
/*   Updated: 2022/10/11 19:08:39 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

ssize_t	ft_bytes_rd(int fd, char *s, size_t c)
{
	ssize_t	bytes_rd;

	bytes_rd = read(fd, s, c);
	if (fd < 0 || read(fd, s, 0) == -1)
		return (1);
	if (!s || !c)
		return (1);
	if (bytes_rd < 0)
		return (1);
	return (bytes_rd);
}
