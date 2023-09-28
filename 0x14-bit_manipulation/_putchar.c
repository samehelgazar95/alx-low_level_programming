#include "main.h"
#include <unistd.h>

/**
 * _putchar- print char
 * @c: the char
 * Return: print char and return 1
*/

int _putchar(char c)
{
	return write(1, &c, 1);
}
