#include "main.h"

/**
 * _strspn - recorre puntero
 * @s: puntero con string completo
 * @accept: puntero con caracter permitido
 * Return: todos los repetidos hasta el primero que no
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int guardo = 0;
	char *p;

	while (*s)
	{
		p = accept;
		while (*p)
		{
			if (*s == *p)
			{
				guardo++;
				break;
			}
		p++;
		}
	if (*p == '\0')
	{
		break;
	}
	s++;
	}
	return (guardo);
}
