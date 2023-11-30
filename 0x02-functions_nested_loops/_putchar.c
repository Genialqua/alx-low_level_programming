#include <unistd.h>

/**
 * _putchar - Entry point of program
 * Description: 'To print to screen without regular tools'
 * Return: Always success
 */


int _putchar(char *out_put)
{
int to_screen;
size_t count = 0;
while (out_put[count] != '\0')
{
count++;
}

to_screen = write(STDOUT_FILENO, out_put, count);
to_screen += write(STDOUT_FILENO, "\n", 1);
return (0);
}


