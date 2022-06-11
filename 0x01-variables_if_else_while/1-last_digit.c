#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'To print the last digit of a random number'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int L;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	L = n % 10;

	if (L > 5)
	{ printf("%s %d is %d and is greater than 5\n", str, n, L); }
	else if (L == 0)
	{ printf("%s %d is %d and is 0\n", str, n, L); }
	if (L <= 6)
	{ printf("%s %d is %d and is 0\n", str, n, L); }
	return (0);
}
