#include "main.h"

/**
 * _strstr - recorre cada posicion en los strings
 * @haystack: puntero que compara
 * @needle: puntero recorre
 * Return: secuencia de caracteres
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if (*haystack == *needle)
			return (haystack);
		haystack++;
	}
	if (*needle == '\0')
		return (haystack);
	return (NULL);
}
