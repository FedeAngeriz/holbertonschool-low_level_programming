#include "main.h"

/**
 * print_alphabet_x10 - 2-print_abc
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char abc;
	int line;

	for (line = 1; line <= 10; line++)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
		{
		_putchar(abc);
		putchar('\n');
		}
	}
}
