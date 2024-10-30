#include "main.h"

/**
 * print_square - imprime
 * @size: variable
 *
 */

void print_square(int size)
{
	int l, e;

	if (size <= 0)
	{
		_putchar ('\n');
	}
	else
	{

	for (l = 0; l < size; l++)
	{
		for (e = 1; e <= size; e++)
		{
			_putchar ('#');
		}
	_putchar ('\n');
	}
	}
}
