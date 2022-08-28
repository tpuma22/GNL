/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:03:44 by tpuma             #+#    #+#             */
/*   Updated: 2022/08/28 17:52:02 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
char	*Text;
char	*BUFFER;

BUFFER = malloc((BUFFER_SIZE + 1) *sizeof(char)); //(char *)malloc(sizeof(char) * (BUFFER_SIZE + 1))
if (!Text)
	/* return (printf("¡No se pudo abrir el archivo %s!", Text)); */
	return (NULL);
if (fd < 0 || fd == 2 || BUFFER_SIZE <= 0)
	return (NULL);
while (*Text != '\0')
{
	if (*Text == '\n')
	{
		Text++;
	}

}
free (BUEFFER);
return (Text);
}

int	main (void)
{
	char cadena[2000];	//Depósito de los caracteres
	int leidos;

//    Apertura del fichero
	int fichero = open ("No_te_rindas.txt", O_RDONLY);
//    Comprobación
	if (fichero==-1)
	{
		perror("Error al abrir fichero:");
		exit(1);
	}

//    Coloca el puntero en la posición 400
	// lseek(fichero,0,SEEK_SET);
	//Lee diez bytes
	leidos = read(fichero, cadena, 1999);
	//Con mi función leo sólo lo que quiero
	get_next_line(fichero);
	//Cierro el fichero
	close(fichero);
	//Libero memoria??????
	cadena[1900]=0;
	// Mensaje para ver qué se leyó
	printf ("\nSe leyeron %d bytes\nLa cadena leída es: %s\n", leidos,cadena);
	return 0;
}


/* int open(const char *ruta, int O_WRONLY);

ssize_t read(int fd, void *buf, size_t nbytes)

int close (int fd) */
