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
	char *concatedString;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (firstLen = 0; s1[firstLen] != '\0'; firstLen++)
		;

	for (secondLen = 0; s2[secondLen] != '\0'; secondLen++)
		;

	if (n > secondLen)
		n = secondLen;

	concatedLen = firstLen + n;


	concatedString = malloc(concatedLen + 1);
	if (concatedString == NULL)

	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
		concatedString[i] = s1[i];

	for (j = 0; j < n; j++)
	{
		concatedString[i] = s2[j];
		i++;
	}

	concatedString[i] = '\0';
	return (concatedString);
}
