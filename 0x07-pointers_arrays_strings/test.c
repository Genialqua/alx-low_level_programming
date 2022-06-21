#include <stdio.h>
/**
 * main - Entry poiint
 *
 * Description: testing code
 *
 * Return: Always 0 (Success)
 */

int print(int nb)
{
	if (nb < 0) 
	{
	return (0);
	}
	printf("%d", nb + print(nb - 1));
	nb --;
	return (nb);
}

int main(void)
{
	print(4);
	return (0);
}
