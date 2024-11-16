#include "dog.h"
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - imprimir nueva estructura de dog
 * @name: variable nombre
 * @age: variable edad
 * @owner: variable duenio
 * Return: si es NULL, nil, si no, el parametro dado
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_perro;

	new_perro = malloc(sizeof(dog_t));

	if (new_perro == NULL)
		return (NULL);

	if (name == NULL)
		name = "";

	new_perro->name = malloc(strlen(name) + 1);

	if (new_perro->name == NULL)
	{
		free(new_perro);
		return (NULL);
	}

	strcpy(new_perro->name, name);

	if (owner == NULL)
		owner = "";

	new_perro->owner = malloc(strlen(owner) + 1);

	if (new_perro->owner == NULL)
	{
		free(new_perro->name);
		free(new_perro);
		return (NULL);
	}

	strcpy(new_perro->owner, owner);

	new_perro->age = age;

	return (new_perro);
}
