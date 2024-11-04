#include "main.h"

/**
 * *_memset - punteros
 * @s: puntero de la string
 * @b: variable que se repite n cantidad de veces
 * @n: cantidad de veces que ocupas *s
 *Return: la cantidad de veces que se repite
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n > 0)
	{
		n--;
		*p = b;
		p++;
	}
	return (s);
}
