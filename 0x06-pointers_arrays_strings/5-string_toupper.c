#include "main.h"

/**
 * string_toupper - A program that changes lower of a string to upper
 * @n: input string
 * Return: the pointer to dest
 */

char *string_toupper(char *n)
{
	int count = 0;

	while (*(n + count) != '\0')
	{
		if ((*(n + count) >= 97) && (*(n + count) <= 122))
			*(n + count) = *(n + count) - 32;
		count++;
	}
	return (n);
}

