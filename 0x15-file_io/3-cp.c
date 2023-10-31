#include "main.h"

/**
 * copyFile - text
 * @fileName: file name
 * @to_fileName: text_content
 * @argv: text_content
 * Return: true
 */

void copyFile(const char *fileName, const char *to_fileName, char *argv[])
{
	int fromFile, toFile;
	char *buffer[1024];
	ssize_t byteSize;

	fromFile = open(fileName, O_RDONLY);
	if (fromFile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	toFile = open(to_fileName, O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
	if (toFile == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	byteSize = read(fromFile, buffer, 1024);
	byteSize = write(toFile, buffer, byteSize);

	if (close(fromFile) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fromFile);
		exit(100);
	}
	if (close(toFile) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", toFile);
		exit(99);
	}

}

/**
 * main - text
 * @argc: file name
 * @argv: text_content
 * Return: true
 */

int main(int argc, char *argv[])
{
	const char *fileName = argv[1];
	const char *to_fileName = argv[2];

	if (argc != 3)
	{
		perror("Usage: cp file_from file_to");
		exit(97);
	}

	copyFile(fileName, to_fileName, argv);
	return (0);
}
