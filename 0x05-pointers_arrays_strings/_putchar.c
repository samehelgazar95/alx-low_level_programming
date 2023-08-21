#include <unistd.h>
#include "main.h"

/**
 * _putchar - write the character to prints out
 * @c: the character to print
 *
 * Return: 1 (Success).
 *	  -1 (Error)
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
