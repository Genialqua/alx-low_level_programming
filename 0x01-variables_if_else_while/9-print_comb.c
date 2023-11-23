#include <stdio.h>

/**
 * main - Entry point into the program.
 * Description: 'This code prints hexadecimal numbers.'
 * Return: Always 0 (success)
*/

int main(void)
{
int j;
for (j = 48; j < 58; ++j)
{
putchar(j);
if (j != 57)
{
putchar(',');
}
}
putchar('\n');
return (0);
}
