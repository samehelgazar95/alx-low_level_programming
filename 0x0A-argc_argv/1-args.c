#include <stdio.h>

/**
 * main- printing arg count
 * @argc: args counter
 * @argv: args vector
 * Return: 0 if no args or args counter
*/

int main(int argc, __attribute__((unused)) char *argv[])
{
	int count = 0;

	if (argc > 1)
	{
		for (; count < argc - 1; count++)
		{}
		printf("%d\n", count);
	}
	else
	{
		printf("%d\n", count);
	}
	return (0);
}
