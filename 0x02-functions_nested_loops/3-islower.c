#include "main.h"


/**
 * _islower - checks for lowercase character
 * 0c: The character to be checked
 * Return: 1 for lowercase characters or 0 for anythig else
 */

int _islower(int c)

{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
