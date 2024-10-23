#include <stdio.h>

/**
 * main - 9-variable
 * Return: 0
 */

int main(void)
{
	int var;

	for (var = 0; var < 10; var++)
	{
	putchar(var + '0');
	if (var < 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');

	return (0);
}
