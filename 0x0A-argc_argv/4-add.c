#include <stdio.h>
#include <stdlib.h>

/**
 * main- add positive numbers
 * @argc: args counts
 * @argv: args vector
 * Return: 0 if no number, the additions for success, or 1 for error
*/

int main(int argc, char *argv[])
{
	int count, sum = 0;
	char *current;

	if (argc > 1)
	{
		count = 1;
		while (count < argc)
		{
			current =  argv[count];

			while(*current)
			{
				if (*current < '0' || *current > '9')
				{
					printf("Error\n");
					return (1);
				}
				current++;
			}

			sum +=  atoi(argv[count]);
			count++;
		}
	}
	printf("%d\n", sum);
	return (0);
}
