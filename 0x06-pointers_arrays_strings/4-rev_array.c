#include "main.h"
/**
 * reverse_array - Reverse a value.
 * @a: pointer.
 * @n: pointer.
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int len = n - 1;
	int OldValue;

	for (i = 0, j = len; i < j; i++, j--)
	{
		OldValue = a[i];
		a[i] = a[j];
		a[j] = OldValue;
	}
}
