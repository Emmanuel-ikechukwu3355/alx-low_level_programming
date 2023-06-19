#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: All the time 0
 */
int main(void)
{
	char k;

	for (k = 'z'; k >= 'a'; k--)
		putchar(k);
	putchar('\n');
	return (0);
}
