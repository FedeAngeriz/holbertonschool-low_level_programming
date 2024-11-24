#include "variadic_functions.h"

/**
 * print_all - imprime cualquier tipo de caracter
 * @format: variable que recibe cualquier tipo de caracter
 * Return: imprime cualquier caracter separador por ", ".
 */

void print_all(const char * const format, ...)
{
	char *cadena;
	unsigned int i = 0;
	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%i", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				cadena = va_arg(args, char *);
				if (cadena == NULL)
				{
					printf("(nil)");
					break;
				}
				else
				{
					printf("%s", cadena);
					break;
				}
		}

		if (format[(i + 1)] != '\0' && (format[i] == 'c' || format[i] == 'i'
					|| format[i] == 'f' || format[i] == 's'))
			printf(", ");
	i++;
	}
	va_end(args);
	printf("\n");
}
