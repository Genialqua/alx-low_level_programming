#include "main.h"

/**
 * print_alphabet - Prints alphabets in lowercase.
 *
 * Return: Always 0 (success)
*/

void print_alphabet(void)
{
char i = 'a';

while (i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');
}
