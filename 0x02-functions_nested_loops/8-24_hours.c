#include "main.h"

/**
 * jack_bauer - A program that checks for
 * sign on numbers
 *
 * Return: void
 */

void jack_bauer(void)
{
int i;
int j;
int k;
int l;

for (l = 0; l <= 2; l++)
{
for (k = 0; k <= 9; k++)
{
for (j = 0; j <= 5; j++)
{
for (i = 0; i <= 9; i++)
{
_putchar('0' + l);
_putchar('0' + k);
_putchar(':');
_putchar('0' + j);
_putchar('0' + i);
_putchar('\n');
}
}
}
}
}
