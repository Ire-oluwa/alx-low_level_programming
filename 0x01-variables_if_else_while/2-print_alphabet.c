#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char al = 'a';
for (i = 97; al <= 'z'; i++)
{
putchar(al);
}
putchar('\n');
return (0);
}
