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

char *string_nconcat(char *s1, char *s2, unsigned int n)
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

	if (n >= (_strlen(s2)))
	{
		copia = malloc(_strlen(s1) + _strlen(s2) + 1);
	}
	else
	{
		copia = malloc(n + _strlen(s1) + 1);
	}
	
	if (copia == NULL)
	{
		return (NULL);
	}

	if (copia == NULL)
		return (NULL);

	for (num = 0; s1[num] != '\0'; num++)
	{
		copia[num] = s1[num];
	}
	
	if (n >= (_strlen(s2)))
	{
		for (num2 = 0; s2[num2] != '\0'; num2++)
		{
			copia[num + num2] = s2[num2];
		}
	}
	else
	{
		for (num2 = 0; num2 < n; num2++)
		{
			copia[num + num2] = s2[num2];
		}
	}
	copia[num + num2] = '\0';
	return (copia);
}
