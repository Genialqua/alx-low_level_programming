#include "main.h"

/**
 * _isalpha - A program that checks for
 * lowercase and uppercase alphabet
 * @c: The character to check
 *
 * Return: 1 for letters 0 for others
 */

int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}

else
{
return (0);
}
return (0);
}
