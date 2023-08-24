#include "main.h"

/**
 * isLower - to check if char is lower or not
 * @c: char to check
 * Return: 1 for lower , 0 for not lower
*/

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelim - to check if char is delimeter or not
 * @c: char to check
 * Return: 1 true, 0 false
*/

int isDelim(char c)
{
	char *delimeters = " \t\n,;.!?\"(){}";

	while (*delimeters)
	{
		if (c == *delimeters)
			return (1);

		delimeters++;
	}
	return (0);
}

/**
 * cap_string - capitalizes all words of a string.
 * @str: string to check
 * Return: a new string capitilized
*/

char *cap_string(char *str)
{
	int delimeter = 1, i;
	char *ptr = str;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (delimeter && isLower(str[i]))
		{
			str[i] -= 32;
			delimeter = 0;
		}
		else if (isDelim(str[i]))
		{
			delimeter = 1;
		}
		else
		{
			delimeter = 0;
		}
	}
	return (ptr);
}
