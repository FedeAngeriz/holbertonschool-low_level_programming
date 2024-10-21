#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - last digit
 * Return: 0
*/

int main(void)
{
	int n, brahian;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf(" Last digit of %d is ", n);
	brahian = n % 10;
	if (brahian > 5)

	printf("%d and is greater than 5\n", brahian);

	else if (brahian == 0)

	printf("%d and is 0\n", brahian);

	else

	printf("%d and is less than 6 and not 0\n", brahian);

	return (0);
}
