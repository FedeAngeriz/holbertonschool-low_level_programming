#include "main.h"

/**
 * print_line - imprime linea
 * @n: variable
 * Return: lineas
 */

void print_line(int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		_putchar ('_');
	}
	_putchar ('\n');
}
