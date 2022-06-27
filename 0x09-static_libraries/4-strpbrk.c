#include "main.h"

/**
 * _strpbrk - A function that searches a string for any set of bytes
 * @s: string
 * @accept: size of string
 *
 * Description: A function that searches a string for bytes
 *
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
	for (j = 0; *(accept + j) != '\0'; j++)
	{
	if (*(s + i) == *(accept + j))
	return (s + i);
	}
	}
	return ('\0');
}
