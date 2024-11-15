#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - asignar espacio en memoria usando malloc
 * @b: numero de byte que se asginan
 * Return: 98 si falla, si no, el puntero
 */

void *malloc_checked(unsigned int b)
{
	int *memoria;

	memoria = malloc((b) + 1);

	if (memoria == NULL)
	{
		exit(98);
	}
	return (memoria);
}
