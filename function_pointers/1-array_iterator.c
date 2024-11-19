#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - funcion dada como parametro
 * @array: puntero al arrays de enteros
 * @size: el tama√o del array
 * @action: un puntero a una funcion que recibe un entero
 * Return: pasa elemento actual como argumento
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
