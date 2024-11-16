#include "main.h"
#include "dog.h"

/**
 * free_dog - liberacion de memoria de perros
 * @d: puntero
 *Return: deja toda la memoria liberada
 */

void free_dog(dog_t *d)
{
	int i = 0;

	while(*d)
	{
		i++;
		free(d[i]);
	}
	free(d);
}
