/**
 * set_bit - bit at a given index
 * @n: Pointer
 * @index: Pointer
 * Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (*n = *n | (1UL << index));
}
