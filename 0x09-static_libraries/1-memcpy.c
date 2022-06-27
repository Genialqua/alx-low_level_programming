#include "main.h"
#include <stdio.h>

/**
 * _memcpy - A function that transfers memory
 * @n: size of memory area
 * @src: source of memory to be copied
 * @dest: destination of memory
 *
 * Return: to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}

