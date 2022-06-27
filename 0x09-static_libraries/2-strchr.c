#include "main.h"
#include <stdio.h>

/**
 * _strchr - Locates a character in a string
 * @c: character
 * @s: string
 *
 * Description: To locate a character in a string
 *
 * Return: to destination
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
	if (*(s + i) == c)
	return (s + i);
	if (*(s + i) == c)
	return (s + i);
	return ('\0');
}
