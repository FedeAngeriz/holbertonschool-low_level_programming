#include "main.h"

/**
 * entero - numeros primos - funcion secundaria
 * @i: variable: iteracion de numeros
 * @n: variable conteo
 *Return: numeros primos
 */

int entero(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n != i && n % i == 0)
	{
		return (0);
	}
	else if (n == i && n % i == 0)
	{
		return (1);
	}
	return (entero(n, i + 1));
}

/**
 * is_prime_number - numeros primos - funcion primaria
 * @n: variable de conteo
 *Return: numeros primos
 */

int is_prime_number(int n)
{
	return (entero(n, 2));
}
