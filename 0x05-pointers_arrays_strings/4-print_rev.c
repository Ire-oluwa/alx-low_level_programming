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
int a = (sizeof(s)/sizeof(s[0]));

for (i = a; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
