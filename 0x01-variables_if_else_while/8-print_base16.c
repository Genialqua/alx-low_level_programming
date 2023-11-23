#include <stdio.h>

/**
 * main - Entry point into the program.
 * Description: 'This code prints hexadecimal numbers.'
 * Return: Always 0 (success)
*/

int main(void)
{
char i = 'a';
int j;

for (j = 48; j < 58; ++j)
{
putchar(j);
}
for (i = 97; i < 103; ++i)
{
putchar(i);
}
putchar('\n');
return (0);
}
