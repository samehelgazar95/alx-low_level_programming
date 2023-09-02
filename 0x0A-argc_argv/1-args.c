#include <stdio.h>

/**
 * main-
*/

int main(int argc,__attribute__((unused)) char *argv[])
{
	int count = 0;

	if (argc > 1)
	{
		for (; count < argc - 1; count++){}
		printf("%d\n", count);
	}
	else if (argc == 1)
	{
		printf("%d\n", count);
	}
	return (0);
}
