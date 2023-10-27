/**
 * get_endianness - bit at a given index
 * Return: 0
 */
int get_endianness(void)
{
	unsigned int output = 1;
	unsigned char *ptr = (unsigned char *)&output;

	if (*ptr == 1)
		return (1);
	else
		return (0);
}
