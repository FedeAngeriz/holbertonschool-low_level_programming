#include "dog.h"

/**
 * init_dog - inicializar variables
 * @d: puntero
 * @name: variable a inicializar
 * @age: variable a inicializar
 * @owner: variable a inicializar
 * Return: variables inicializadas con datos
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != 0)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
