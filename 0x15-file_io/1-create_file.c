#include "main.h"
/**
 * create_file - creates a file
 * @filename: the file name to create
 * @text_content: content to add into the file
 * Return: -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int fildes, wts, cls = 0;

	fildes = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (filename == NULL)
		return (-1);
	if (fildes == -1)
		return (-1);
	if (text_content != NULL)
		cls = strlen(text_content);

	wts = write(fildes, text_content, cls);
	if (wts == -1)
	{
		close(fildes);
		return (-1);
	}
	close(fildes);
	return (1);
}
