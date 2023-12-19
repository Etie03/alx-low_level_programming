#include "main.h"
/**
 * read_textfile - a function that reads text file
 * and prints to the POSIX std output
 * @filename: name of the file to read
 * @letters: number of letters to print
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd;
	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	rd = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, rd);

	free(buff);
	close(fd);
	return (rd);
}
