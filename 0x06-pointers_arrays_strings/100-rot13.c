/**
 * rot13 -  encodes a string using rot13.
 * @str: string to be converted
 *
 * Return: String encoded to ROT13
*/

char *rot13(char *str)
{
	char *res = str;
	char rot[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char ROT[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	while (*str)
	{
		for (i = 0; i < sizeof(rot) / sizeof(char); i++)
		{
			if (*str == rot[i])
			{
				*str = ROT[i];
				break;
			}
		}
		str++;
	}
	return (res);
}
