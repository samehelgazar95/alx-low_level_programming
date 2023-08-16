#include "main.h"

void times_table(void)
{
	int num = 0;

	for (int n1 = 0; n1 < 10; n1++)
	{
		for (int n2 = 0; n2 < 10; n2++)
		{
			num += n2;
			_putchar('num' + '0');
		}
		num = 0;
	}
}
