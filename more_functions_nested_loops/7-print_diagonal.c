#include "main.h"

/**
 * print_diagonal - imprime diagonal
 * @n: variable
 * @e: variable espacio blanco
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
			for (l = 0; l < e; l++)
			{	
				_putchar (' ');
			}
				_putchar ('\\');
				_putchar ('\n');			
		}
	}
}
