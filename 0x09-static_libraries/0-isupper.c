#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: Char to check
 *
 * Return: 1 (Is upper) - 0 (Otherwise)
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
