#include <stdio.h>

/**
 * main - imprime cantidad de argumentos
 * @argc: variable, cuenta la cantidad de argumentos
 * @argv: puntero que no hace nada
 * Return: la cantidad de argumentos
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
