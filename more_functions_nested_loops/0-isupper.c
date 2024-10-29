#include "main.h"

/**
* _isupper - que tipo de letra es
* @c: que letra entra
* Return: 1 si la letra es Mayus, si no es 0
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
