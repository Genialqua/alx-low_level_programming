#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: 'To print selected lower case alphabet'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch, e, q;

	ch = 'e';
	ch = 'q';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch != e && ch != q)
	putchar(ch); }
	{ printf("\n"); }
	return (0);
}

