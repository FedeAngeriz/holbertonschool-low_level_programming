#include "main.h"
#include <stdlib.h>

/**
 * _calloc - asignar memoria a una matriz
 * @nmemb: cantidad de elementos de la matriz
 * @size: tama√o de los elementos
 * Return: matriz. si falla malloc, o si nmemb o size son 0, es NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *matriz;

	matriz = malloc(nmemb);

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (matriz == NULL)
		return (NULL);
	return (matriz);
}
