#include <stdio.h>

/**
 * main - Entry point into the program.
 * Description: 'This program prints lowercase alphabets in reverse order.'
 * Return: Always 0 (success)
*/

int main(void)
{
char i = 'z';
for (i = 122; i > 96; --i)
{
putchar(i);
}
putchar('\n');
return (0);
}
