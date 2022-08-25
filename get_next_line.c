/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:03:44 by tpuma             #+#    #+#             */
/*   Updated: 2022/08/25 18:31:56 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

Descriptores de archivo para stdin, stdout, y stderr

<<<La entrada estándar (stdin, de Standard Input) consiste en los datos que son 
enviados al programa. En la mayoría de los casos, estos datos son ingresados 
mediante el teclado o son el resultado de la ejecución de un comando anterior. 
El descriptor de archivo asociado a stdin es el 0.
<<<La salida estándar (stdout, de Standard Output) es la vía por la que el 
programa devuelve los datos luego de su ejecución. Por lo general, stdout es la 
pantalla de la computadora. El descriptor de archivo correspondiente es el 1.
<<<El error estándar (stderr, de Standard Error) es el canal por el que se envía un 
mensaje de error en caso de que su ejecución falle. Si bien este mensaje 
generalmente también se visualizará por pantalla, es importante destacar que Linux 
permite distinguir entre stderr y stdout para manipular ambas secuencias de manera 
separada. El descriptor de archivo es el 2.

#include "get_next_line.h"

char	*get_next_line(int fd)
char	*archivo;
{
	if (!archivo) 
    	return (printf("¡No se pudo abrir el archivo %s!", archivo));




	return ();
}

int	main(void)
{

	return (0);
}
