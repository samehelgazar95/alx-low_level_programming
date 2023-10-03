#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile- reads a text file and prints it
 * @filename: the file
 * @letters: the count
 * Return: number of chars read
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, read_count;
	char *read_text = calloc(letters, sizeof(char));

	if (read_text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	read_count = read(fd, read_text, letters);
	if (read_count < 0)
		return (0);

	printf("%s", read_text);


	if (close(fd) < 0)
		return (0);

	return (read_count);
}
