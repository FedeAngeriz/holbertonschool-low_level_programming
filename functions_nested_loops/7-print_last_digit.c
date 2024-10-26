#include "main.h"

/**
 * print_last_digit - imprime el ultimo numero
 * @num: variable
 *Return: el ultimo digito
 */

int print_last_digit(int num)
{
	int res;

	res = num % 10;
	while (res < 0)
	{
		res = -res;
	}
		_putchar (res);
	return (res);
}
