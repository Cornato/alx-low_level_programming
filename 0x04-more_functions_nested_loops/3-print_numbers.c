#include "main.h"
#include <stdio.h>
/**
 * print_numbers - Print
 *
 * Return: 0
 */
void print_numbers(void)
{
int c;
for (c = 0; c <= 9; c++)
{
_putchar('0' + c);
}
_putchar('\n');
}