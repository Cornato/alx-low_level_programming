#include <stdio.h>

/**
 * main - display alphabet reverse and lowercase
 * Return: return 0 and exit the program
 */
int main(void)
{
	char Conter;

	for (Conter = 'z'; Conter >= 'a'; Conter--)
		putchar(Conter);
	putchar('\n');

	return (0);
}
