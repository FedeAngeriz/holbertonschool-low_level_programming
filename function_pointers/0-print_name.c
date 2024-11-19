#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - imprime nombre
 * @name: puntero a un string que guarda nombre
 * @f: puntero a funcion
 * @*: puntero
 * Return: nombre
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
