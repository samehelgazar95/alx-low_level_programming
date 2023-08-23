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
	char *ptr;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	ptr = dest;

	return (ptr);
}
