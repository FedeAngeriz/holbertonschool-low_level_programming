#include "main.h"

/**
 * puts_half
 * @str: puntero
 * Return: la mitad al final
 */

void puts_half(char *str)
{
	int l = 0;
	char *p = str;

	while (*p)
	{
		p++;
		l++;
	}
	if (l % 2 == 0)
	{
		p = str + l / 2;
	}
	else
	{
		p = str + (l - 1) / 2 + 1;
	}
	
	while (*p)
	{
		_putchar (*p);
		p++;
	}
	_putchar ('\n');
}
