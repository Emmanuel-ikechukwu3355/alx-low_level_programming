#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int m, a;
	
	for (m = 0; m <= 98; m++)
	{
		for (a = m + 1; a <= 99; a++)
		{
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			putchar(' ');
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			if (m == 98 && a == 99)
			continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
