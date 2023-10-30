#include "main.h"
/**
 * read_textfile - reads a text
 * @filename: file name
 * @letters: letters
 * Return: letter
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fOpen;
	ssize_t readByteSize, writeByteSize;


	if (filename == NULL)
		return (0);

	fOpen = open(filename, O_RDONLY);

	if (fOpen == false)
		return (0);
	
	buf = malloc(sizeof(char) * letters);
	readByteSize = read(fOpen, buf, letters);
	writeByteSize = write(STDOUT_FILENO, buf, readByteSize);
	free(buf);
	close(fOpen);
	return (writeByteSize);
}