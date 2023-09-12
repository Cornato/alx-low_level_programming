#include "main.h"
/**
 * main - Prints _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char Content[] = "_putchar\n";

	for (i = 0; Content[i] != '\0'; i++)
	{
		_putchar(Content[i]);
	}

	return (0);
}
