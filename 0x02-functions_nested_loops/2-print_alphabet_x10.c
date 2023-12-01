#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabets in lowercase 10 times.
 *
 * Return: Always 0 (success)
*/

void print_alphabet_x10(void)
{
int i;

for (i = 0; i <= 9; i++)
{
char i = 'a';

while (i <= 'z')
{
_putchar(i);
i++;
}
_putchar('\n');
}
}
