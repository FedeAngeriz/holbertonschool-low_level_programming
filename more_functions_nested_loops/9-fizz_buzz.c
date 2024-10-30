#include <stdio.h>

/**
 * main - fizzBuzz
 *Return: fizzBuzz
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
			if (num > 99)
			break;
			putchar (' ');
		}
		else if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
		printf("%d ", num);
		}
	}
	printf("\n");

	return (0);
}
