#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file- function that creates a file.
 * @filename: the file
 * @text_context: the text
 * Return: 1 for success, -1 for failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd < 0)
		return (-1);

	if (write(fd, text_content, sizeof(text_content)) < 0)
		return (-1);

	return (1);
}
