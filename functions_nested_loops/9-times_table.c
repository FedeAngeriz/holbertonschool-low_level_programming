#include "main.h"

/**
 * times_table - tabla de cuentas
 * @num
 * @mul
 * @resultado
 * Return: void
 */

void times_table(void)
{
	int num, mul, resultado;

	for (num = 0; num <= 9; num++)
	{
		_putchar ('0');
		for (mul = 1; mul <= 9; mul++)
		{
			_putchar (',');
			_putchar (' ');
			resultado = num * mul;
			if (resultado <= 9)
				_putchar (' ');
			else
				_putchar ((resultado / 10) + '0');
			_putchar ((resultado % 10) + '0');
		}
		_putchar ('\n');
	}

}
