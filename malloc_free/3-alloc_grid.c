#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - grilla de filas y columnas
 * @width: variable fila
 * @height: variable columnaa
 *Return: grilla de filas y columnas con datos a cero
 */

int **alloc_grid(int width, int height)
{
	int **asignar;
	int columna, fila;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	asignar = malloc(height * sizeof(int **));

	if (asignar == NULL)
	{
		return (NULL);
	}

	for (columna = 0; columna < height; columna++)
	{
		asignar[columna] = malloc(width * sizeof(int));

		if (asignar == NULL)
		{
			for (fila = 0; fila < width; fila++)
			{
				free(asignar[fila]);
			}
			free(asignar);
			return (NULL);
		}

		for (fila = 0; fila < width; fila++)
		{
			asignar[columna][fila] = 0;
		}
	}
	return (asignar);
}
