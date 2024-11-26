#include "3-calc.h"

int main(int argc, char *argv[])
{
	int num1, num2, resultado;
	int (*operador)(int, int);

	if (argc <= 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[4]);
	operador = get_op_func(argv[2]);
	
	if (operador == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	resultado = operador(num1, num2);
	printf("%d\n", resultado);

	return (0);
}
