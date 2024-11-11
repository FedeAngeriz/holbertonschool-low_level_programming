#include "main.h"

/**
 * _strstr - recorre cada posicion en los strings
 * @haystack: puntero que compara
 * @needle: puntero recorre
 * Return: secuencia de caracteres
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (*needle == '\0')
	{
	return (haystack);
	}

	while (*haystack)
	{
	h = haystack;
	n = needle;

	while (*h && *n && (*h == *n))
	{
		h++;
		n++;
	}


	if (*n == '\0')
	{
		return (haystack);
	}

	haystack++;
	}
	return (NULL);
}
