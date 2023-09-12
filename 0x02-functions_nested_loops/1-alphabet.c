#include "main.h"

/**
 * print_alphabet - print alphabet
 *
 * Description: Prints alphabet in one line
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char LChar;

	for (LChar = 'a'; LChar <= 'z'; LChar++)
		_putchar(LChar);

	_putchar('\n');
}