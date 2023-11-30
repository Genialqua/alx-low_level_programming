#include <unistd.h>

/**
 * _putchar - Entry point of program
 * Description: 'To print to screen without regular tools'
 * Return: Always success
 */

int _putchar(void)
{
char *out_put = "_putchar\n";
size_t count = (sizeof(out_put));
int to_screen = 0;

to_screen = write(STDOUT_FILENO, out_put, count);
return (to_screen);
}
