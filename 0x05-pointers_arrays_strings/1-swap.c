#include "main.h"
/**
 * swap_int - to swap value
 * @a: pointer
 * @b: pointer
 *
 */
void swap_int(int *a, int *b)
{
	int swaps = *a;
	*a = *b;
	*b = swaps;
}
