/**
 * swap_int - swaps the values of two integers.
 * @a: pointer to first param
 * @b: pointer to seond param
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
