#include <stdlib.h>

/**
 * str_concat- Concat two strings
 * @s1: first string
 * @s2: second string
 * Return: new concatenated string or null
*/

char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	char *str;

	if (s1 == NULL)
		s1 = "\0";

	if (s2 == NULL)
		s2 = "\0";

	for (len1 = 0; s1[len1] != '\0'; len1++)
	{}

	for (len2 = 0; s2[len2] != '\0'; len2++)
	{}

	str = (char *)malloc(sizeof(char) * (len1 + len2) + 1);
	if (str == NULL)
		return (0);

	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
		str[len1] = s1[len1];
	}

	for (len2 = 0; s2[len2] != '\0'; len2++, len1++)
	{
		str[len1] = s2[len2];
	}

	str[len1] = '\0';

	return (str);
}
