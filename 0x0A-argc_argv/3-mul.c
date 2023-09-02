#include <stdio.h>
#include <stdlib.h>

/**
 * main- mul two numbers
 * @argc: args count
 * @argv: args vector
 * Return: 0 or 1
*/

int main(int argc, char *argv[])
{
	int res, num1, num2;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		printf("%d\n", num1 * num2);
		res = 0;
	}
	else if (argc != 3)
	{
		printf("Error\n");
		res = 1;
	}

	return (res);
}
