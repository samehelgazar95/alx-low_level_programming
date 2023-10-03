#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * _strlen- calc the len
 * @str: the string
 * Return: the len
*/

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * append_text_to_file- append text to an existing file
 * @filename: the file
 * @text_content: the text
 * Return: 1 success, -1 failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t len = _strlen(text_content), bytes;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (len)
		bytes = write(fd, text_content, len);

	close(fd);

	return (len == bytes ? 1 : -1);
}
