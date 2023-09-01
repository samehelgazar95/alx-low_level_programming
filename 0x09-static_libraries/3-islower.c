#include "main.h"

/**
 * _islower -  Write a function that checks for lowercase character.
 * @c: the char to check
 *
 * Return: 1 (Lower) - 0 (Otherwise)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}
