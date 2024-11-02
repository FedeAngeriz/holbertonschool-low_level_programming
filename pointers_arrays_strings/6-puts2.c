#include "main.h"

/**
 * puts2 - salto de cadena
 * @str: puntero del string
 * Return: salta de 2 en 2
 */

void puts2(char *str)
{
	int num;

	for (num = 0; str[num] != '\0'; num += 2)
	{
		_putchar (str[num]);
	}
	_putchar ('\n');
}
