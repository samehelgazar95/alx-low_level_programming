
/**
 * _strncat - concatenates two strings.
 * @dest: first string
 * @src: second string
 * @n: number of bytes to add
 *
 * Return: pointer with new string
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;

	while (j < n && *src)
	{
		dest[i] = *src++;
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
