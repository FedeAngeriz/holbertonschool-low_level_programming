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
	int i, entero;

	if (nmemb == 0 || size == 0)
		return (NULL);

	entero = nmemb * size;
	matriz = malloc(entero);

	if (matriz == NULL)
		return (NULL);

	for (i = 0; i < entero; i++)
		*((char *)matriz + i) = 0;

	return (matriz);
}
