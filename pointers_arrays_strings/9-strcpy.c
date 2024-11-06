#include "main.h"

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
