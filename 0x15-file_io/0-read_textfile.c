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
	ssize_t ByteSize;


	fOpen = open(filename, O_RDONLY);

	if (fOpen == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	ByteSize = read(fOpen, buf, letters);
	ByteSize = write(STDOUT_FILENO, buf, ByteSize);
	free(buf);
	close(fOpen);
	return (ByteSize);
}
