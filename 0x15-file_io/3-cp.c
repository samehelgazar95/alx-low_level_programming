#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

#define ERR_USAGE "Usage: cp file_from file_to"
#define ERR_READ "Error: Can't read from file %s\n"
#define ERR_WRITE "Error: Can't write to %s\n"
#define ERR_CLOSE "Error: Can't close fd %d\n"
#define FILE_MODES (O_WRONLY | O_CREAT | O_TRUNC)
#define FILE_PERMS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main- entry point
 * @ac: the args count
 * @av: the args
 * Return: 0
*/

int main(int ac, char **av)
{
	int fd_from, fd_to;
	char buffer[1024];
	ssize_t bytes;

	if (ac != 3)
		dprintf(STDERR_FILENO, ERR_USAGE), exit(97);

	fd_from = open(av[1], O_RDONLY);
	fd_to = open(av[2], FILE_MODES, FILE_PERMS);

	if (fd_from == -1)
		dprintf(STDERR_FILENO, ERR_READ, av[1]), exit(98);

	if (fd_to == -1)
		dprintf(STDERR_FILENO, ERR_WRITE, av[1]), exit(99);

	while ((bytes = read(fd_from, buffer, 1024)) > 0)
	{
		if ((write(fd_to, buffer, bytes)) != bytes)
			dprintf(STDERR_FILENO, ERR_WRITE, av[2]), exit(99);
	}

	if (bytes < 0)
		dprintf(STDERR_FILENO, ERR_READ, av[1]), exit(98);

	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, ERR_CLOSE, fd_from), exit(100);

	if (close(fd_to == -1))
		dprintf(STDERR_FILENO, ERR_CLOSE, fd_to), exit(100);
	return (EXIT_SUCCESS);
}
