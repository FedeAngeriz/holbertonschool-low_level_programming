#include "main.h"

/**
 * _strchr - recorre el string
 * @s: puntero a ver
 * @c: variable comparativa
 * Return: si se encuentra el caracter o null
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
		return (s);
		}
		s++;

		if (c == '\0')
		{
		return (s);
		}
	}
	return (NULL);
}
