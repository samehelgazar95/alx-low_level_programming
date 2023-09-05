#include <stdlib.h>
#include "main.h"

/***/

char *argstostr(int ac, char **av)
{
	char *res = NULL;
	int i;

	if (ac == 0 || av == NULL)
	{
		return (res);
	}
	else
	{
		for (i = 0; i < ac; i++)
		{
			while (**av)
			{
				_putchar(**av);
				av++;
			}
			_putchar('\n');
		}
	}

	return (res);
}
