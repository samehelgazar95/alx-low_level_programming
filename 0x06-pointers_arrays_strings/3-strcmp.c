/**
 * _strcmp - compares two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: 15 if (s1 > s2), -15 if (s1 < s2), 0 if (s1 == s2)
*/

int _strcmp(char *s1, char *s2)
{
	unsigned int s1Sum, s2Sum;
	int i = 0;

	while (s1[i])
	{
		s1Sum += s1[i] - '0';
		i++;
	}

	i = 0;

	while (s2[i])
	{
		s2Sum += s2[i] - '0';
		i++;
	}

	if (s1Sum > s2Sum)
		return (15);
	else if (s1Sum < s2Sum)
		return (-15);
	else
		return (0);
}
