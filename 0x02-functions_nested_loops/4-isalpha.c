#include "main.h"

/**
 * _isalpha -  checks for alphabetic character.
 *
 * @c: param to check
 *
 * Return: 1 (true), 0 (false)
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
