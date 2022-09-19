#include "main.h"

/**
 * swap_int - swap 2 integers
 * @a: first integer to be swapped
 * @b: other integer to be swapped
 * Return: no return
 */

void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
