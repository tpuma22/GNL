/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpuma <tpuma@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:04:17 by tpuma             #+#    #+#             */
/*   Updated: 2022/08/25 18:22:27 by tpuma            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"




open - abre y o crea un archivo.

int open(const char *ruta, int flags);
int open(const char *ruta, int flags, mode_t modo);
Objetivo: La llamada al sistema open se utiliza para transformar una ruta de archivo a un
descriptor de arhivo (un valor entero no negativo que se utiliza para identificar
al archivo abierto).
parametros:
camino: es un arreglo que almacena la ruta del archivo por abrir.
flags: es una bandera que le indica a open el modo de apertura, puede ser:
sólo lectura (O_RDONLY), sólo escritura (O_WRONLY), lectura/escritura (O_RDWR), 
O_APPEND, etc.
mode_t modo: es una bandera que le indica a open los permisos que se le asignarán
al archivo si este no existia y se le indicó a open crearlo con la bandera
O_CREAT.
retorno: open regresa un entero el cual es el descriptor de archivo o -1 en caso de error.


read - lee un descriptor de archivo

ssize_t read(int fd, void *buf, size_t nbytes);
descripcion: read almacena en buf los nbytes leidos del archivo referenciado por (fd).
parametros: fd es un descriptor al archivo que se intenta leer con read.
buf es la localidad en memoria donde se almacenaran los bytes leidos.
nbytes es el numero de bytes que se intentaran leer del archivo.
retorno: read regresa un valor de tipo ssize_t, un entero que indica el numero de bytes leeidos
ó -1 en caso de error.


write - escribe a un descriptor de archivo.

ssize_t write(int fd, const void *buf, size_t nbytes);
descripcion: write escribe hasta nbytes de la localidad de memoria referenciada por buf en el
archivo referenciado por fd.
parametros: fd es un descriptor al archivo que se intenta escribir con write.
buf es la localidad de memoria que almacena la informacion que se va escribir por write.
nbytes es el numero maximo de bytes que se van a escribir al archivo.
retorno: -1 en caso de error o un valor de tipo ssize_t que indica el numero de bytes escritos.


close - cierra un descriptor de archivo

int close (int fd);
Descripcion: close cierra un descriptor de archivo de manera que pueda ser reutilizado por el sistema.
close no garantiza que los datos del archivo se hayan escrito en el disco por lo que se
recomienda el uso de fsync.
parametros: Un Descriptor de archivo abierto.
retorno: 0 en caso de éxito y 1 en caso de error.

