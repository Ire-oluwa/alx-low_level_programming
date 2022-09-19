#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: no return.
 */
void puts_half(char *str)
{
int i, j;
for (; str[i] != '\0';)
{
i += 1;
}
if (i % 2 == 0)
{
j = i/2;
}
else
{
j = (i-1)/2;
}
for(j++; j < i; j++)
{
putchar(*(str + j));
}
putchar('\n');
}
