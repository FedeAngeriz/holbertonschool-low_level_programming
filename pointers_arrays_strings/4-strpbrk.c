#include "main.h"

/**
 * _strpbrk - busqueda de caracter
 * @s: puntero que recorre
 * @accept: puntero recorrido
 * Return: caracteres repetidos en los strings
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *l = accept;

		while (*l)
		{
			if (*s == *l)
				return (s);
			l++;
		}
		s++;
	}
	return (NULL);
}
