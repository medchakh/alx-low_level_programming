#include "main.h"
#include <stdio.h>
/**
 * main - check the code.
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
