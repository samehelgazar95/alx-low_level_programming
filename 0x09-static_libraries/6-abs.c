#include "main.h"

/**
 * _abs -  computes the absolute value of an integer.
 *
 * @num: the param that user enters
 *
 * Return: integer (Success)
*/

int _abs(int num)
{
	if (num < 0)
	{
		return (num * -1);
	}

	return (num);
}
