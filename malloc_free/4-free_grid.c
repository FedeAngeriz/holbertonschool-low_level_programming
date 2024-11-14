#include "main.h"
#include <stdlib.h>
/**
 * free_grid - liberacion de memoria
 * @grid: puntero doble
 * @height: variable a contar
 *Return: deja vacia todo
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
