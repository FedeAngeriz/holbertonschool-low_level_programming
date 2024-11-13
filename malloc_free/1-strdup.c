#include "main.h"
#include <stdlib.h>

/**
 * _strlen - largo de cadena
 * @s: puntero
 * Return: el largo
 */

int _strlen(char *s)
{
	int l;

	for (l = 0; s[l] != '\0'; l++)
	{
	}
	return (l);
}

/**
 * _strdup - copia de cadena
 * @str: puntero
 * Return: puntero a espacio recienc asignado
 */

char *_strdup(char *str)
{
	char *copia;
	int num;

	if (str == NULL)
		return (NULL);

	copia = malloc(_strlen(str) + 1);
	if (copia == NULL)
		return (NULL);

	for (num = 0; str[num] != '\0'; num++)
	{
		copia[num] = str[num];
	}
	copia[num] = '\0';
	return (copia);
}
