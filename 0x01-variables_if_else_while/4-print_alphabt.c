#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: All the time 0 (success)
 */
int main(void)
{
	char k;

	for (k = 'a'; k < = 'z'; k++)
	{
		if (k == 'q' || k 'e')
		{
			continue;
		}
		putchar(k);
	}
	putchar('\n');
	return (0);
}
