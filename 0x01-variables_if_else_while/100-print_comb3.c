#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point 
 *
 * Return: All the time 0
 */

int main(void)
{
	int c, d;

	for (c = '0'; c < '9'; c++)
	{
	for (d = c + 1; d <= '9'; d)
	{
	if (d != c)
	{
	putchar(c);
	putchar(d);
	if (c == '8' && d == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
