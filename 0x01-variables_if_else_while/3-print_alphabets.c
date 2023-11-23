#include <stdio.h>

/**
 * main - Entry point into the program.
 * Description: 'This code prints alphabets in lowercase and uppercase.'
 * Return: Always 0 (success)
*/

int main(void)
{
char i = 'a';
char j = 'A';
for (i = 97; i < 123; ++i)
{
putchar(i);
}
for (j = 65; j < 91; ++j)
{
putchar(j);
}
putchar('\n');
return (0);
}
