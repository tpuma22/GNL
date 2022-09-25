/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:03:44 by tpuma             #+#    #+#             */
/*   Updated: 2022/09/25 18:15:10 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/* char	*get_next_line(int fd)
{
	char	*Text;
	char	*Aux;
	char	*line;
	int		file;
	int		i;
	ssize_t	read;

	read = 1;
	Aux= malloc((BUFFER_SIZE + 1) *sizeof(char)); //(char *)malloc(sizeof(char) * (BUFFER_SIZE + 1))
	if (!Text || !Aux)
		return (printf("No existe el archivo %s", Text));
	 if (fd < 0 || fd == 2 || BUFFER_SIZE <= 0)
		return (NULL);
	while (Text[i] = '\0')
	{
		Aux = Text[i];
		if (i == '\n')
			break
		i++;
	}
	 printf ("\nSe leyeron %d bytes\nLa cadena leída es: %s\n", file, Aux);
	Aux[1900] = 0;
	free (Aux);
	return (line);
} */

char	*ft_read(int fd, char *str)
{
	size_t	rd;
	char	*temp;
	size_t	BUFFER_SIZE;

	BUFFER_SIZE = 0;
	rd = 1;
	temp = malloc(sizeof (char) * (BUFFER_SIZE + 1));
	if (!temp)
		return (0);
	if (rd <= 0)
		return (0);
	while (rd != 0 && (!ft_strchr(str, '\n')))
	{
		rd = read(fd, temp, BUFFER_SIZE);
		temp[rd] = '\0';
		str = ft_strjoin(str, temp);
	}
	free(temp);
	return (str);
}

/* char	*get_next_line(int fd)
{
	static char		*str;
	char			*line;

	if (BUFFER_SIZE <= 0 || fd < 0)
		return (0);
	str = ft_read(fd, str);
	if (!str)
		return (NULL);
	line = ft_get_line(str);
	str = ft_save_line(str);
	return (line);
} */

int	main(void)
{
	int		fd;
	char	*leidos;
	char	file[2000];

	fd = open("No_te_rindas.txt", O_RDONLY);
	leidos = ft_read(fd, file);
	printf("Los bytes leidos son: %d\nLacadena leida es: %s\n", fd, file);
	/*file = get_next_line(fd);
	printf("%s", file);
	file = get_next_line(fd);
	printf("%s", file);
	file = get_next_line(fd);
	printf("%s", file);
	file = get_next_line(fd);
	printf("%s", file);
	file = get_next_line(fd);
	printf("%s", file);
	file = get_next_line(fd);
	printf("%s", file); */
	free(file);
	close(fd);
	return (0);
}

/* int	main (void)
{
	char	cadena[2000];	//Depósito de los caracteres
	int		leidos;
	int		fichero;

//    Apertura del fichero
	fichero = open ("No_te_rindas.txt", O_RDONLY);
//    Comprobación
	if (fichero==-1)
	{
		perror("Error al abrir fichero:");
		exit(1);
	}

//    Coloca el puntero en la posición 400
	// lseek(fichero,0,SEEK_SET);
	//Lee la cantidad de bytes que le indiquemos
	leidos = read(fichero, cadena, 1999);
	//Con mi función leo sólo lo que quiero
	//get_next_line(fichero);
	//Cierro el fichero
	close(fichero);
	//Libero memoria??????
	cadena[1900]=0;
	// Mensaje para ver qué se leyó
	printf ("\nSe leyeron %d bytes\nLa cadena leída es: %s\n", leidos,cadena);
	return 0;
}
 */
