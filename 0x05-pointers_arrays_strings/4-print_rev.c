#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: input string.
 * Return: no return.
 */
void print_rev(char *s)
{
int i = 0;

for (i--; i >= 0; i--)
{
if (s[i] == '\0')
{
break;
}
putchar(*(s + i));
}
putchar('\n');
}
