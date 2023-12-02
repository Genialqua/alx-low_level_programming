#include "main.h"

/**
 * print_sign - A program that checks for
 * sign on numbers
 * @n: The character to check
 *
 * Return: 1 for letters 0 for others
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
return (0);
}
