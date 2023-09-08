#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat- concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concate
 * Return: Ptr to new string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int firstLen, secondLen, concatedLen, i, j;
	char *concatedString = NULL;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (firstLen = 0; *s1 != '\0'; firstLen++)
	{}

	for (secondLen = 0; *s2 != '\0'; secondLen++)
	{}

	if (n < secondLen)
		concatedLen = n + firstLen;
	else
		concatedLen = secondLen + firstLen;

	concatedString = (char *)malloc(concatedLen);
	if (concatedString == NULL)
	{
		return (NULL);
	}

	for (i = 0; *s1 != '\0'; i++)
	{
		concatedString[i] = s1[i];
	}

	if (n < secondLen)
	{
		for (j = 0; j < n; j++, i++)
		{
			concatedString[i] = s2[j];
		}
	}
	else
	{
		for (j = 0; j < secondLen; j++, i++)
                {
                        concatedString[i] = s2[j];
                }
	}

	concatedString[i] = '\0';

	return (concatedString);
}
