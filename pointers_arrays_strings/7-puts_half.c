#include "main.h"

/**
 * 
 * @
 * Return:
 */

void puts_half(char *str)
{
	int i = *str / 2;
	int num;

	for (num = i; num < str; num++)
	{
		_putchar (str[num]);
	}
	_putchar ('\n');
}
