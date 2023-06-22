#include "main.h"


/**
 * _isalpha - Checks for alphabetic caracter
 * 0c: The characters to be checked
 * Return: 1 for alphabetic character or 0 fot anything else
 */

int _isalpha(int c)
{

if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
