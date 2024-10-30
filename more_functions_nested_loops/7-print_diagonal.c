#include "main.h"

/**
 * print_diagonal - imprime diagonal
 * @n: variable
 *Return: salta de linea
 */

void print_diagonal(int n)
{
	int l, e;

	if (n <= 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (e = 1; e <= n; e++)
		{
			for (l = 1; l < e; l++)
			{
				_putchar (' ');
			}
				_putchar ('\\');
				_putchar ('\n');
		}
	}
}
