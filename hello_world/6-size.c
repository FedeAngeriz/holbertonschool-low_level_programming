#include <stdio.h>

/**
 * main - size
 * Return: 0
 */

int main(void)
{

	printf("Size of a char: %ld byte\n", sizeof(char));
	printf("Size of an int: %ld byte\n", sizeof(int));
	printf("Size of a long int: %ld byte\n", sizeof(long int));
	printf("Size of a long long int: %ld byte\n", sizeof(long long int));
	printf("Size of a float: %ld byte\n", sizeof(float));

	return 0;
}
