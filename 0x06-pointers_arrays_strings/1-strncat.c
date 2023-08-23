
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
	if (dest == NULL || src == NULL)
		return;

	int i = 0, j = 0;

	while (dest[i])
		i++;

	while (j < n)
	{
		dest[i] = *src++;
		j++;
		i++;
	}
	dest[i] = '\n';

	return (ptr);
}
