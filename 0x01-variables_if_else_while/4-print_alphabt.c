#include <stdio.h>

/**
 * main - output the alphabet
 * Return: 0 and exit the program
 */
int main(void)
{
	char txt;

	for (txt = 'a'; txt <= 'z'; txt++)
	{
		if (txt != 'q' && txt != 'e')
			putchar(txt);
	}
	putchar('\n');
	return (0);
}
