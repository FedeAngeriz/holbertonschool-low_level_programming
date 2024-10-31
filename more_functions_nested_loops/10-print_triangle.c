#include "main.h"

/**
 * print_triangle - triangulo
 * @size: imprime triangulo
 *Return: triangulo
 */

void print_triangle(int size)
{
	int l, e;

	if (size <= 0)
	{
		_putchar ('\n');
	}
		for (e = 1; e <= size; e++)
		{
			for (l = 1; l <= size; l++)
			{
				if (l <= size - e)
				{
				_putchar (' ');
				}
				else
				{
					_putchar ('#');
				}
			}
				_putchar ('\n');
		}
}
