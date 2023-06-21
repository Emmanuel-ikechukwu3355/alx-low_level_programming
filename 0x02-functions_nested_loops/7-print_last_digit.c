#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - hiya wahed lfunctionse
 * @n: hiyac wlahrt fojnction
 * Return: 0 ila kannt 1 hh
 */

int print_last_digit(int n)
{
if (n >= 0)
{
_putchar('0' + (n % 10));
return ((n % 10));
}
else
{
_putchar('0' + (-(n % 10)));
return (-(n % 10));
}
}
