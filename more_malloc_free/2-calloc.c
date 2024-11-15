#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - asignar memoria a una matriz
 * @nmemb: cantidad de elementos de la matriz
 * @size: tama√o de los elementos
 * Return: matriz. si falla malloc, o si nmemb o size son 0, es NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *matriz;

	if (nmemb == 0 || size == 0)
		return (NULL);

	matriz = malloc(nmemb * size);

	if (matriz == NULL)
		return (NULL);
	
	memset(matriz, 0, nmemb * size);

	return (matriz);
}
