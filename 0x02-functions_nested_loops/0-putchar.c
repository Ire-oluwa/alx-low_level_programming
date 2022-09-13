include "main.h"

/**
 * main - a function that prints _putchar
 *
 * Return: 0 if successful
 */

int main(void)
{
char str = "_putchar";
int i;

for (i = 0; i != '\0'; i++)
{
_putchar(str[i]);
}

_putchar('\n');
return (0);
}
