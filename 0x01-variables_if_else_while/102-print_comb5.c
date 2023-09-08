
#include <stdio.h>
/**
 * main - entry point of our program
 * Return:0 (success)
 */
int main(void)
{
	int c, d;

	for (c = 0; c <= 98; c++)
	{
		for (d = c + 1; d <= 99; d++)
		{
			putchar((c / 10) + '0');
			putchar((c % 10) + '0');
			putchar(' ');
			putchar((d / 10) + '0');
			putchar((d % 10) + '0');
			if (c == 98 && d == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}i
