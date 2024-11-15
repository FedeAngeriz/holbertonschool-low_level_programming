#include "main.h"
#include <stdlib.h>

/**
 * array_range - crear una matriz de enteros
 * @min: valor minimo
 * @max: valor maximo
 * Return: matriz de entero, si min < max, sino NULL
 */

int *array_range(int min, int max)
{
	int *matriz;
	int i;

	if (min > max)
		return (NULL);

	matriz = malloc((max - min + 1) * sizeof(int));

	if (matriz == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++)
		matriz[i] = min + i;

	return (matriz);
}
