#include "variadic_functions.h"

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
			case 'i':
				printf("%i", va_arg(args, int));
			case 'f':
				printf("%f", va_arg(args, double));
			case 's':
				cadena = va_arg(args, char *);

			if (cadena == NULL)
				printf("(nil)");
			else
				printf("%s", cadena);
		}

		if (format[i + 1] != '\0' && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
			printf(", ");
	i++;
	}
	va_end(args);

	printf("\n");
}
