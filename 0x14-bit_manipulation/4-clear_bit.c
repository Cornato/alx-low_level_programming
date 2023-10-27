/**
 * clear_bit - bit at a given index
 * @n: Pointer
 * @index: Pointer
 * Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n & ~(1UL << index);
	return (1);

}