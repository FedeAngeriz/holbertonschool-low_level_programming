#include "main.h"
#include <stdlib.h>

/**
 * 
 * @
 *Return: 
 */

char *_strdup(char *str)
{
	int largo;
	char *copia;
	int num;

	if (str == NULL)
		return (NULL);

	largo = _strlen(str) + 1;

	copia = malloc(largo * sizeof(char));
	if (copia == NULL)
		return (NULL);

	for (num = 0; num < largo - 1; num++)
	{
		copia[num] = str[num];
	}
	copia[num] = '\0';
	return (copia);
}
