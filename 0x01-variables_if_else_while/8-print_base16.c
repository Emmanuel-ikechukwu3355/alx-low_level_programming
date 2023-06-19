#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: All the time 0
 */
int main(void)
{
	int p;

	char k;

	for (p = '0'; p <= '9'; p++)
		putchar(p);
	for (k = 'a'; k <= 'f'; k++)
		putchar(k);
	putchar('\n');
	return (0);
}
