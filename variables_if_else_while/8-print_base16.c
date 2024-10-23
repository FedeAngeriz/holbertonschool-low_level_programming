#include <stdio.h>

/**
 * main - hexadecimal
 * Return: 0
 */

int main(void)
{
	int hex;

	for (hex = 0; hex < 16; hex++)
	if (hex < 10)
	{
		putchar(hex + '0');
	}
	else
	{
		putchar(hex - 10 + 'a');
	}
	putchar('\n');
	return (0);
}
