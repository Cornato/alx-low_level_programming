#include "main.h"
/**
 * create_file - reads a text
 * @filename: file name
 * @text_content: text_content
 * Return: letter
 */

int create_file(const char *filename, char *text_content)
{
	int FOpen;
	ssize_t byteSize;

	FOpen = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (FOpen == -1)
		return (-1);

	if (text_content != NULL)
	{
		byteSize = write(FOpen, text_content, strlen(text_content));
		if (byteSize == -1)
		{
			close(FOpen);
			return (-1);
		}
		close(FOpen);
	}
	close(FOpen);
	return (1);
}
