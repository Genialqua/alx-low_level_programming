#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'A program that prints putchar as desired'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch[9] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(ch[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
