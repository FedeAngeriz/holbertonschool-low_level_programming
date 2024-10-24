#include "main.h"

/**
 * print_alphabet - 2-alphabet
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char abc;
	int line;

	for (line = 10; line++;)
	{
	for (abc = 'a'; abc <= 'z'; abc++)
	{
	_putchar(abc);
	}
	}

	_putchar('\n');
}
