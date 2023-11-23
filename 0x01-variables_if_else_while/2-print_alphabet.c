#include <stdio.h>

/**
 * main - Entry point into this program.
 * Description: 'This code prints alphabets in lowercase.'
 * Return: Always 0 (success)
*/

int main(void)
{
char i = 'a';
for (i = 97; i < 123; ++i)
{
putchar(i);
}
putchar('\n');
}
