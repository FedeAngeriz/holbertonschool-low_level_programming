#include <stdio.h>

/**
 * main - imprime cadena de argumentos seguido de una nueva linea con puntero
 * @argc: variable que no se usa
 * @argv: puntero que va imprimiendo desde la posicion 0
 * Return: todos los argumentos ingresados mas la ruta del archivo
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	while (*argv)
	{
		printf("%s\n", argv[0]);
		argv++;
	}
	return (0);
}
