#include "main.h"

/**
 * _abs - A program that checks for
 * sign on numbers
 * @n: The character to check
 *
 * Return: 1 for letters 0 for others
 */

int _abs(int n)
{
if (n < 0)
{
return ((n * (-1)));
}
else if (n > 0)
{
return (n);
}
return (0);
}
