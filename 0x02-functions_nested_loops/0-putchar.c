#include <unistd.h>

/**
 * main - Entry point of program
 * Description: 'To print to screen without regular tools'
 * Return: Always success
 */

int main(void)
{
/* This is the text to be printed */
char text[] = "_putchar\n";

/* Length of the text */
size_t length = sizeof(text) - 1;

/* write system call would print to the screen */
write(1, text, length);

return (0);
}
