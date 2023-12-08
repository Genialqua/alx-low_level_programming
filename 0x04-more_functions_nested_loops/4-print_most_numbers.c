#include "main.h"

/**
 * print_most_numbers - Checks for right digit
 *
 * Return: 1 if its a digit, 0 otherwise
 */

void print_most_numbers(void)
{
char c;

for (c = '0'; c <= '9'; c++)
if ((c != '2') && (c != '4'))
{
_putchar(c);
}
_putchar('\n');
}
