#include "main.h"

/**
 * _isdigit - Checks for a digit
 * @c: The integer to check
 * Return: 1 if its a digit, 0 otherwise
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
