#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string.
 * Return: no return.
 */
void print_rev(char *s)
{
int i;

for (i--; i >= 0; i--)
{
putchar(*(s + i));
}
}
