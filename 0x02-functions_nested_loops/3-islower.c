#include "main.h"

/**
 * _islower -  Write a function that checks for lowercase character.
 * @c: the char to check
 *
 * Return: 1 (Lower) - 0 (Otherwise)
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
}
