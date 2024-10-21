#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - last digit
 * Return: 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d Last digit of\n", n);
	if (n > 5)
	{
	printf(" and is greater than 5\n");
	}
	else if (n == 0)
	{
	printf(" and is 0\n");
	}
	else
	{
	printf(" and is less than 6 and not 0\n");
	}
	/* your code goes there */
	return (0);
}
