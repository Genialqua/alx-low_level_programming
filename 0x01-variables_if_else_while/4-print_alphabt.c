#include <stdio.h>

/**
 * main - Entry point into the program.
 * Description: 'This code prints alphabets in lowercase without e and q.'
 * Return: Always 0 (success)
*/

int main(void)
{
char i = 'a';
for (i = 97; i < 123; ++i)
{
if ((i != 101) && (i != 113))
putchar(i);
}
putchar('\n');
return (0);
}

