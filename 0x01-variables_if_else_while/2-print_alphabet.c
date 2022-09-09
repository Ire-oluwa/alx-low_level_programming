#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char al = 'a';
for (int i = 97; al <= 'z'; i++)
{
putchar(al);
}
putchar('\n');
return (0);
}
