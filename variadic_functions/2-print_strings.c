#include "variadic_functions.h"

/**
 * print_strings - imprime cadenas
 * @separator: puntero que funciona como separador de strings
 * @n: variable que indica la cantidad de strins a imprimir
 * Return: imprime strings seguidos, separados con ", ".
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *cadena;
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		cadena = va_arg(args, char *);

		if (cadena == NULL)
			printf("(nill)");
		else
			printf("%s", cadena);

		if (separator != NULL)
			if (i < n - 1)
				printf("%s", separator);
	}
	va_end(args);

	printf("\n");
}
