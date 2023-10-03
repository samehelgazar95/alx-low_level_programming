#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>

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
 * perm_check- checking the file permission
 * @filename: the file
 * Return: 1 or -1
*/

int perm_check(const char *filename)
{
	struct stat file_info;
	
	if (stat(filename, &file_info) == 0)
		return ((file_info.st_mode & S_IWGRP) == S_IWGRP);
	else
		return (0);
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

	if (!perm_check(filename))
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (len)
		bytes = write(fd, text_content, len);

	close(fd);

	return (len == bytes ? 1 : -1);
}
