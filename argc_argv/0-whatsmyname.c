#include <stdio.h>

/**
 * main - guarda e imprime nombre
 * @argc: variable cancelada por el attribute
 * @argv: array que guarda el nombre
 * Return: devuelve el nombre
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
