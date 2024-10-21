#include <stdio.h>

/**
 * main - alphabet
 * Return: 0
 */

int main(void)
{
	char up, low;

	for (low = 'a'; low <= 'z'; low++)
	{
	putchar(low);
	}
	{
	putchar('\n');
	}
	for (up = 'A'; up <= 'Z'; up++)
	{
	putchar(up);
	}
	return (0);
}
