#include "main.h"
#include <stdio.h>
/**
 * _isupper return 1 if c upper case or 0 if else
 * @c: the character to be checked
 * Return: Always 0.
 */
 int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
