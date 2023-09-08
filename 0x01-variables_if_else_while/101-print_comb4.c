#include <stdio.h>

/**
 * main - output differente combination
 * Return: return 0 and exit
 */
int main(void)
{
	int aa;
	int bb;
	int cc;
	int z = 0;

	for (aa = '0'; aa <= '7'; aa++)
	{
		for (bb = '0'; bb <= '8'; bb++)
		{
			for (cc = '0'; cc <= '9'; cc++)
			{
				if (aa < bb && bb <= cc && aa != bb && bb != cc)
				{
					putchar(aa);
					putchar(bb);
					putchar(cc);
					z++;
					if (z < 126)
					{
						putchar (',');
						putchar (' ');
					}
				}
			}
		}
		z++;
	}
	putchar('\n');
	return (0);
}
