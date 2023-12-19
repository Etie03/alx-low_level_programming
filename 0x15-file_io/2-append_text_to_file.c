#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: filename
 * @text_content: added content
 *
 * Return: 1 if the file exists and -1 if it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, fdw = 0, length = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (text_content[length] != '\0')
	{
		length++;
	}
	fdw = write(fd, text_content, length);
	if (fdw == -1)
		return (-1);
	close(fd);
	return (1);
}
