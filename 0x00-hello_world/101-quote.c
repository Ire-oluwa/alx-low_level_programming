#include<unistd.h>
/**
 * main - Entry
 *
 * Return: Always 1(Success)
 */
int main(void)
{
char errorMessage[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, errorMessage, 59);
return (1);
}
