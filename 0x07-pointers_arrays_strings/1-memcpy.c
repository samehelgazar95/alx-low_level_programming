/**
 * _memcpy -  copies memory area.
 * @dest: destination array
 * @src: array source
 * @n: numer of indecies to copy
 *
 * Return: Pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest = src[i];
		dest++;
	}

	return (dest);
}
