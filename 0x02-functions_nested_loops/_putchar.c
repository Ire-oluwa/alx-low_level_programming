#include<unistd.h>
#include "main.h"

/**
 * _putchar: writes a character to standard output (stdout)
 * @c: the character to be written to stdout
 *
 * Return: if successful, 1
 * if not successful, return -1 and error is set appropriately.
 */

int _putchar(c)
{
return (write(1,  &c, 1));
}
