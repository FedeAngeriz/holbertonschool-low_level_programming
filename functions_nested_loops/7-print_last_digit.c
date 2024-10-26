#include "main.h"

/**
 * print_last_digit - imprime el ultimo numero
 * @num: variable
 *Return: el ultimo digito
 */

int print_last_digit(int num)
{
	int r;

	r = num % 10;
	if (r < 0)
		r = -r;

	_putchar (r + '0');
	return (r);
}
