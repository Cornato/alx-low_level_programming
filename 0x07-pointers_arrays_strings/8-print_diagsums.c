#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - diagsums
 * @a: type char string
 * @size: type int
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i;
	int diagsums1 = 0, diagsums2 = 0;

	for (i = 0; i < size; i++)
	{
		diagsums1 += *(a + i * size + i);
		diagsums2 += *(a + i * size + (size - 1 - i));
	}
	printf("%d, %d\n", diagsums1, diagsums2);
}
