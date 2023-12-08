#include "main.h"

/**
 * print_numbers - Checks for a digit
 *
 * Return: 1 if its a digit, 0 otherwise
 */

void print_numbers(void)
{
char c;
for (c = 48; c <= 57; c++)
{
_putchar(c);
}
_putchar(36);
_putchar('\n');
}
