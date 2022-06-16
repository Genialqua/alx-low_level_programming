#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - A function that prints all natural numbers from n to 98
 * user inputs number prints to 98, < 98 or > 98
 * @n: number input
 * Return: Always 0 (Success)
 */

void print_to_98(int n)
{

	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)

	{
		while (n > 98)
		{
			printf("%d,", n);
			n--;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
		printf("%d, ", n);
		n--;
		}

	printf("98\n");
}
}


