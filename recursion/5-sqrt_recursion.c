#include "main.h"

/**
 * raiz - funcion secundaria
 * @i: variable que va iterando
 * @n: variable conteo
 *Return: raiz cuadrada
 */

int raiz(int n, int i)
{
	if (n < 0 || n == 0)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (raiz(n, i + 1));
}

/**
 * _sqrt_recursion - raiz cuadrada
 * @n: variable de conteo
 * Return: raiz cuadrada de un numero
 */

int _sqrt_recursion(int n)
{
	return (raiz(n, 1));
}
