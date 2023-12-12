#include <unistd.h>

/**
 * _putchar - Entry point of program
 * Description: 'To print to screen without regular tools'
 * @c: The character to print
 * Return: Always success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
