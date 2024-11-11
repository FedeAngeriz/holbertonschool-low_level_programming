#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplicacion de 2 argumentos
 * @argc: variable que cuenta los argumentos
 * @argv: puntero que guarda la posicion de cada argumento para la cuenta
 * Return: resultado de la cuenta
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int numero1 = atoi(argv[1]);
		int numero2 = atoi(argv[2]);

		printf("%d\n", numero1 * numero2);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (0);
	}
}
