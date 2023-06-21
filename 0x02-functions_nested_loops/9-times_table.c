#include "main.h"
#include <stdio.h>
/**
 * times_table - hieheieei
 */

void times_table(void)
{
int i, j;

for (i = 0; i < = 9; i++)
{
for (j = 0; j < = 9; j++)
{
if (j != 0)
printf("%2d", i * j);
else
printf("0");
if (j != 9)
printf(", ");
}
printf("\n");
}
}
