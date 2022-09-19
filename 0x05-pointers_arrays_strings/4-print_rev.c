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
int count = 0;

for (i = 0; s[i] != '\0'; i++)
{
count += i;
}

for (count += 1; count >= 0; count--)
{
if (s[count] != '\0')
{
putchar(s[count]);
}

}
putchar('\n');
}
