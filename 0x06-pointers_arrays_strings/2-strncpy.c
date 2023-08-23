/**
 * _strncpy - copies a string.
 * @dest: first string
 * @src: second string
 * @n: size of copied chars
 *
 * Return: new pointer equals to the new modified string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
