#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
	char *cadena;
	unsigned int i = 0;
	va_list args;
	
	va_start(args, format);

	while (format && format[i])
	{
		while (format[i])
		cadena = va_arg(args, char *);

		if (format == NULL)
			printf("(nill)");
		else
			printf("%s", format);

		if (format != NULL && i < tipo - 1)
			printf("%s", format);
	i++;
	}
	va_end(args);

	printf("\n");
}
