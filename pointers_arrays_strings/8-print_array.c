#include "main.h"
#include <stdio.h>

/**
 * print_array - string de enteros
 * @a: puntero del string
 * @n: variable de los enteros
 *Return: los enteros separados con comas
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		printf(", ");
	}
	printf("\n");
}
