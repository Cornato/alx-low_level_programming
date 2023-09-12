#include "main.h"

/**
 * print_alphabet_x10 - print alphabet x10
 *
 * Description: Prints print_alphabet_x10 in ten line
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int Count;
	char LChar;

	for (Count = 0; Count <= 10; Count++)
	{
		for (LChar = 'a'; LChar <= 'z'; LChar++)
			_putchar(LChar);

		_putchar('\n');

	}
	
	

	_putchar('\n');
}
