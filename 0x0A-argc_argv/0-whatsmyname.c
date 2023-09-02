#include <stdio.h>

/**
 * main- prints the name of compiled filename
 * @argc: agruments counter
 * @argv: arguments vector
 * Return: Nothing
*/

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
