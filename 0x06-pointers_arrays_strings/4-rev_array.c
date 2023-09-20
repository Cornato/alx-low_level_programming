#include "main.h"
/**
 * reverse_array - Reverse a value.
 * @a: pointer.
 * @n: pointer.
 */
void reverse_array(int *a, int n)
{
	int i;
	int len = n - 1;
	int OldValue;

	for (i = 0, len; i < len; i++, len--)
	{
		OldValue = a[i];
        	a[i] = a[len];
        	a[len] = OldValue;
    	}
}
