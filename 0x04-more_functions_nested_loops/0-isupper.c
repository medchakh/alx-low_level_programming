#include "main.h"
#include <stdio.h>
/**
 * _isupper - a function that checks for uppercase c character 
 * @c: the character to be checked
 *
 * Return: 1 if appercase,
 * return 0 otherwise
 */
 int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
