#include "main.h"

/**
 * _isalpha - checks for uppercase character
 * @c: the character in ASCII code
 *
 * Return: 1 if c is upprecase or lowercase, 0 if otherwise
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}

return (0);
}
