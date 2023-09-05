#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: the NULL terminating string
 * Return: 1 if file exist, -1 if file not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fildes, wts, cls = 0;

	fildes = open(filename, O_WRONLY | O_APPEND);

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	if (fildes == -1)
		return (-1);

	while (text_content[cls])
		cls++;

	wts = write(fildes, text_content, cls);
	if (wts == -1)
	{
		close(fildes);
		return (-1);
	}
	close(fildes);
	return (1);
}
