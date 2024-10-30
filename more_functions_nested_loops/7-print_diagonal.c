#include "main.h"

/**
 * print_diagonal - imprime diagonal
 * @n: variable
 *Return: salta de linea
 */

void print_diagonal(int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		_putchar ('\\');
	}
	_putchar ('\n');
}
