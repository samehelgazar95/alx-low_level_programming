#include <stdio.h>

/**
 * main- prints arguments
 * @argc: args count
 * @argv: args vector
 * Return: 0 for success
*/

int main(int argc, char *argv[])
{
	int count = 0;

	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}

	return (0);
}
