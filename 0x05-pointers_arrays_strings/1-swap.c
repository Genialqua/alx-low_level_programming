#include "main.h"

/**
 * swap_int - swap pointer value
 * @a: The pointer to check
 * @b: The pointer to check
 * Return: 1 if its a digit, 0 otherwise
 */

void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;

}
