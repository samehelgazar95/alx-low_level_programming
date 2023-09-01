/**
 * _strcat -  concatenates two strings
 * @dest: first string.
 * @src: second string.
 *
 * Return: Pointer for the concatenated string
*/

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;
	int i = 0;

	while (*dest++)
		i++;

	while (*src)
	{
		ptr[i] = *src++;
		i++;
	}
	ptr[i] = '\0';

	return (ptr);
}
