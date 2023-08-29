#include <stdio.h>

/**
 * print_diagsums- prints the sum of the two diagonals of a square matrix
 * @a: the 2d array
 * @size: the size of the array
 *
 * Return: Nothing
*/

void print_diagsums(int *a, int size)
{
	int i, main, sec;

	main = 0;
	sec = 0;

	for (i = 0; i < size; i++)
	{
		main += a[i];
		sec += a[size - i - 1];
		i += size;
	}

	printf("%d, %d", main, sec);
}
