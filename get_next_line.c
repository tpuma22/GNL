/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:03:44 by tpuma             #+#    #+#             */
/*   Updated: 2022/10/11 19:07:51 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	int			i;
	char		string;
	char		*file;

	i = 0;
	if (fd < 0 || fd == 2 || BUFFER_SIZE < 0)
		return (NULL);
	file = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!file)
		return (NULL);
	while ((ft_bytes_rd(fd, &string, 1)) > 0)
	{
		file[i++] = string;
		if (string == '\n')
			break ;
	}
	if (!string)
		return (free(file), NULL);
	file[i] = '\0';
	string = 0;
	return (file);
}

int	main(void)
{
	char	*line;
	int		fd;
	int		i;

	fd = open("No_te_rindas.txt", O_RDONLY);
	i = 0;
	line = 0;
	line = get_next_line(fd);
	printf("%s", line);
	line = get_next_line(fd);
	//printf("%s", line);
	// line = get_next_line(fd);
	// printf("%s", line);
	// line = get_next_line(fd);
	// printf("%s", line);
 	while (line != NULL)
	{
		printf("%s", line);
		free(line);
		line = get_next_line(fd);
		i++;
	}
	//system("leaks a.out");
	return (0);
}
