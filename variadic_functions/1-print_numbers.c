#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>

/**
 * print_numbers - imprime numeros seguidos
 * @separator: puntero que funciona como separador de los numeros
 * @n: variable que indica la cantidad de numeros a imprimir
 * Return: imprime numeros seguidos separados con ", ".
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL)
			printf("%s", separator);
	}
	va_end(args);

	printf("\n");
}
