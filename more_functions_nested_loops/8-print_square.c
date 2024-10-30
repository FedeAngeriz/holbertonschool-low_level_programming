#include "main.h"

/**
 * print_square - imprime
 * @n: variable
 *
 */

void print_square(int size)
{
	int l, e;
	
	if (size <= 0)
	{
		_putchar ('\n');
	}

	for (l = 0; l < size; l++)
	{
		for (e = 0; e < l; e++)
		{
			_putchar ('#');
		}
	_putchar ('\n');
	}

}
