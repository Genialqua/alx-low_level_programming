#include "main.h"

/**
 * _print_rev_recursion - A function that prints a string backwards
 * @s: string
 *
 * Description: Prints in reverse order
 *
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_print_rev_recursion(s - 1);
	}
	else
		_putchar('\n');
}

