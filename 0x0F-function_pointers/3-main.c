#include "3-calc.h"

/**
 * main - check the code
 * @argc: the agrs size
 * @argv: the args values
 * Return: Succesful 0, errors 98, 99, 100
*/

int main(int argc, char **argv)
{
	int num1, num2, (*fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	fun = get_op_func(argv[2]);
	if (!fun)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (num2 == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", fun(num1, num2));

	return (0);
}
