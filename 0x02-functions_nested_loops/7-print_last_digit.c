#include "main.h"

/**
 * print_last_digit - A program that checks for
 * last digit on numbers
 * @n: The number to check
 *
 * Return: 1 for letters 0 for others
 */

int print_last_digit(int n)
{
int last_digit;
{
/*Ensure the number is not negative*/
if (n < 0)

n = -n;
}

/*Extract the last digit*/
last_digit = n % 10;

/*Print the last digit*/
_putchar('0' + last_digit);

/*Return the last digit*/
return (last_digit);

}
