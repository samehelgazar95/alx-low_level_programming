/**
 * _strstr- function that locates a substring.
 * @haystack: larger string
 * @needle: smaller string
 * Return: Returns pointer to substring or NULL
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle[0] == '\0')
	{
		return (haystack);
	}

	i = 0;
	j = 0;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[j])
		{
			j++;
			if (needle[j] == '\0')
			{
				return (&haystack[i - j + 1]);
			}
		}
		else
		{
			i++;
		}
	}
	return (0);
}
