#include "main.h"

/**
 * rev_string - string al inverso
 * @s: puntero
 *Return: en reverso
 */

void rev_string(char *s)
{
	int i = 0, a = 0;
	char t;

	while (s[i] != '\0')
		i++;
	i--;

	while (a < i)
	{
		t = s[i];
		s[i] = s[a];
		s[a] = t;
		a++;
		i--;
	}
}
