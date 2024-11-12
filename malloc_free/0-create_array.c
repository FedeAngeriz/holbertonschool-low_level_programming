#include "main.h"
#include <stdlib.h>

/**
 * create_array - creacion de matriz
 * @size: variable de espacio
 * @c: variable que se guarda adentro de size
 *Return: matriz
 */

char *create_array(unsigned int size, char c)
{
	char *matriz;
	unsigned int num;

	if (size == 0)
		return (NULL);

	matriz = malloc(size * sizeof(char));
	if (matriz == NULL)
		return (NULL);

	for (num = 0; num < size; num++)
		matriz[num] = c;

	return (matriz);
}
