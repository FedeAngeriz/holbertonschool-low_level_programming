#include "main.h"

/**
 * more_numbers - numeros y lineas
 *
 * Return: numeros
 */

void more_numbers(void)
{
	int n;
	int line;

	for (line = 1; line <= 10; line++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar (n / 10 + '0');
			}
			_putchar (n % 10 + '0');
		}
		_putchar ('\n');
	}
}
