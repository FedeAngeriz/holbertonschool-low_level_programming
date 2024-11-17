#include "main.h"
#include "dog.h"

/**
 * free_dog - liberacion de memoria de perros
 * @d: puntero
 * Return: deja toda la memoria liberada
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
