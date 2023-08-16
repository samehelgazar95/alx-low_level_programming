#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - pint until 98
 * @n: param to start from
 *
 *
*/
void print_to_98(int n)
{
	int count;

	if (n > 98)
	{
		for (count = 0; count > 98; count--)
		printf("%d", count);
	}
	else
	{
		for (count = n; count < 98; count++)
		{
			printf("%d", count);
		}
	}
	print("98\n");
}
