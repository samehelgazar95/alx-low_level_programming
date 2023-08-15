#include "main.h"

int print_last_digit(int r)
{
	r = _abs(r);

	_putchar('0' + r % 10);
	return (r % 10);
}
