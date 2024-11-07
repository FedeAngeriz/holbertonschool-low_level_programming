#include "main.h"

/**
 * _strlen_recursion - largo de string
 * @s: puntero
 *Return: largo del string
 */

int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
