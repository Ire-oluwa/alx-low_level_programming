#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string.
 * Return: no return.
 */
void print_rev(char *s)
{
int i;

for (i = -1; i < 0; i--)
{
putchar(*(s + i));
}
putchar('\n');
}
