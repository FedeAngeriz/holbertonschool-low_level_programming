#include "main.h"
#include <stdlib.h>

/**
 * _strlen - largo del strings
 * @s: puntero
 *Return: largo de la cadena
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
 * str_concat - concatenar 2 strings
 * @s1: puntero
 * @s2: puntero
 *Return: una cadena nueva con las anteriores sumadas
 */

char *str_concat(char *s1, char *s2)
{
	char *copia;
	int num, num2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	copia = malloc(_strlen(s1) + _strlen(s2) + 1);

	if (copia == NULL)
	{
		return (NULL);
	}

	for (num = 0; s1[num] != '\0'; num++)
	{
		copia[num] = s1[num];
	}
	for (num2 = 0; s2[num2] != '\0'; num2++)
	{
		copia[num + num2] = s2[num2];
	}
	copia[num + num2] = '\0';
	return (copia);
}
