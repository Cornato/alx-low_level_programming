#include <stdio.h>

/**
 * main - output the alphabet in lowercase, and then in uppercase
 * Return: 0 and exit the program
 */
int main(void)
{
	int count;

	for (count = 'a'; count <= 'z'; count++)
		putchar(count);
	for (count = 'A'; count <= 'Z'; count++)
		putchar(count);
	putchar('\n');
	return (0);
}
