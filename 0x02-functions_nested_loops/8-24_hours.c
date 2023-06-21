#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - db hadi
 */
void jack_bauer(void)
{
int i;

for (i = 0; i <= 24 * 60 - 1; i++)
{
printf("%02d:%02d\n", i / 60, i % 60);
}
}
