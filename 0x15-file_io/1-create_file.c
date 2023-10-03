#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * stringlen- calc the len
 * @str: the string
 * Return: the len
*/

int stringlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * create_file- function that creates a file.
 * @filename: the file
 * @text_content: the text
 * Return: 1 for success, -1 for failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_wrote = 0;
	int len = stringlen(text_content);

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd < 0)
		return (-1);

	if (len)
		bytes_wrote = write(fd, text_content, len);

	if (close(fd) < 0)
		return (-1);

	return (bytes_wrote ? 1 : -1);
}
