#include <stdio.h>
/**
 * main - Entry point 
 *
 * Return: All the time 0
 */
int main(void)
{
	int a, b, k;
	
	for (a = '0'; a < '9'; a++)
	{
	for (b = a + 1; b < = '9'; b++)
	{
	for (k = b + 1; k < = '9'; k++)
	{
	if ((b != a) != k)
	{
	putchar(a);
	putchar(b);
	putchar(k);
	if (a == '7' && b == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
