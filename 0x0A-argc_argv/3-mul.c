#include <stdio.h>

/**
 * main- mul two numbers
 * @argc: args count
 * @argv: args vector
 * Return: 0 or 1
*/

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", (*argv[1] - 48) * (*argv[2] - 48));
		return (0);
	}
	else if (argc != 3)
	{
		printf("Error\n");
	}

	return (1);
}
