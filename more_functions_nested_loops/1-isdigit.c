#include "main.h"

/**
 * _isdigit - verifica si es un digito
 * @c: variable que chequea numero
 * Return:
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
