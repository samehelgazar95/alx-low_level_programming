#include "main.h"

/**
 * _len- get the length
 * @s: the string
 * Return: the length
*/

int _len(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len += (_len(s + 1) + 1);
	}

	return (len);
}

/**
 * palindrome_helper- helping to make the main recursion
 * @s: the string
 * @start: the first index
 * @end: the last index
 * Return: 1 for success - 0 for failur
*/

int palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] == s[end])
	{
		return (palindrome_helper(s, start + 1, end - 1));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome- checks if a string is a palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if not
*/

int is_palindrome(char *s)
{
	int len = _len(s);

	return (palindrome_helper(s, 0, len - 1));
}
