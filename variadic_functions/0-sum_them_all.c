#include "variadic_functions.h"

/**
 * sum_them_all - lista de argumentos
 * @n: variable de la lista
 * Return: lista el primero fijo y los demas dinamicos
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int suma;

	va_list(args);
	va_start(args, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		suma = suma + va_arg(args, int);
	va_end(args);

	return (suma);
}
