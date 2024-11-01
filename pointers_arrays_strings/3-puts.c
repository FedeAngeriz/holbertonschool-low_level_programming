#include "main.h"

/**
 * _puts - cuenta el largo
 * @str: string
 *Return: el largo
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar (str[i]);
		i++;
	}
	_putchar ('\n');
}
