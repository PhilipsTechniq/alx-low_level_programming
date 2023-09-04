#include "main.h"
/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output
 * @filename: text file to read
 * @letters: the number of letters it should read and print
 * Return: 0 if filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bwt, brd;
	int fildes = open(filename, O_RDONLY);
	char *buffer;

	if (filename == NULL)
		return (0);
	if (fildes == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	brd = read(fildes, buffer, letters);
	bwt = write(STDOUT_FILENO, buffer, brd);

	close(fildes);
	free(buffer);
	return (bwt);
}
