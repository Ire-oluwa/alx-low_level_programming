#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: input string.
 * Return: length of a string.
 */

int _strlen(char *s)
{
int i = 0;
for (; *(s + i) != '\0';)
{
i += 1;
}
return (i);
}
