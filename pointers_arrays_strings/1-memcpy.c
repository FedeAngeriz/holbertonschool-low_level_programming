#include "main.h"

/**
 * _memcpy - copiar array a otro
 * @dest: puntero destino
 * @src: puntero inicio
 * @n: variable
 *Return: copia los array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n > 0)
	{
		*p = *src;
		p++;
		src++;
		n--;
	}
	return (dest);
}
