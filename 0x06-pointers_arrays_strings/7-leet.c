
/**
 * leet -  encodes a string into 1337.
 * @str: string to convert
 * Return: another leeted string
*/


char *leet(char *str)
{
	char *res = str;
	char key[] = {'a', 'e', 'o', 't', 'l'};
	int leet[] = {52, 51, 48, 55, 49};
	int i;

	while (*str)
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == key[i] || *str == (key[i] - 32))
			{
				*str = leet[i];
			}
		}
		str++;
	}
	return (res);
}
