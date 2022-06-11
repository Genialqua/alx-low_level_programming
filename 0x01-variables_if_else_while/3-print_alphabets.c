#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: 'To print lower and uppercase alphabet'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z';)
	{ putchar(ch); }
	for (ch = 'A'; ch <= 'Z';)
	{ putchar(ch); }
}

