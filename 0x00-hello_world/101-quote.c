#include <stdio.h>

/**
 * main - entry point
 *
 * description: printing quote with loop
 *
 * return: 1 (not success)
*/

int main(void)
{
	char q[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, q, strlen(q));

	return (1);
}
