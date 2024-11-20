#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - buscar numeros enteros
 * @array: un puntero al array de enteros que sera buscado
 * @size: numero de elementos del array
 * @cmp: puntero a funcion que recibe un entero y retorna un valor
 * Return: numeros enteros
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	return (-1);
}
