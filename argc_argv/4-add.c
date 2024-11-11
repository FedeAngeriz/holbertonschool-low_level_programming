#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - suma de n argumentos
 * @argc: variable que suma los argumentos
 * @argv: puntero que guarda la posicion de cada argumento para la cuenta
 * Return: resultado de la cuenta
 */

int main(int argc, char *argv[])
{
	int suma = 0, s;
	char *p;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (s = 1; s < argc; s++)
	{
		p = argv[s];

		while (*p)
		{
			if (!isdigit(*p))
			{
				printf("Error\n");
				return (1);
			}
			p++;
		}

		suma = suma + atoi(argv[s]);
	}
	printf("%d\n", suma);
	return (0);
}
