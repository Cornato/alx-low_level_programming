#include "main.h"

/**
* print_numbers - print 0 - 9
*
* Return : Always 0 (success)
*/

void print_numbers(void)
{
	int Conuter = 0;

	do {
	_putchar(Conuter + 48);
	Conuter++;
	} while (Conuter >= 0 && Conuter <= 9);
	_putchar('\n');
}
