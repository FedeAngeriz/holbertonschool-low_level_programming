#include "dog.h"
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - largo del strings
 * @s: puntero
 *Return: largo de la cadena
 */

int _strlen(char *s)
{
	int num = 0, l;

	for (l = 0; s[l] != '\0'; l++)
	{
		num++;
	}
	return (num);
}

/**
 * _strcpy - copia string a otro
 * @dest: puntero destino
 * @src: puntero salida
 *Return: retorna lo mismo de los 2 punteros
 */

char *_strcpy(char *dest, char *src)
{
	char *p = dest;
	int i = 0;

	while (src[i] != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (p);
}

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

	new_perro->name = malloc(_strlen(name) + 1);

	if (new_perro->name == NULL)
	{
		free(new_perro);
		return (NULL);
	}

	_strcpy(new_perro->name, name);

	if (owner == NULL)
		owner = "";

	new_perro->owner = malloc(_strlen(owner) + 1);

	if (new_perro->owner == NULL)
	{
		free(new_perro->name);
		free(new_perro);
		return (NULL);
	}

	_strcpy(new_perro->owner, owner);

	new_perro->age = age;

	return (new_perro);
}
