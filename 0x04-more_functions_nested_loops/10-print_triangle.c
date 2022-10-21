#include "main.h"

/**
 * main - check the code
 * @size : is int 
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int rows, columns;

	if (size > 0)
	{
		for (rows = 1; rows <= size; rows++)
		{
			for (columns = size; columns >= 1; columns--)
			{
				if (rows < columns)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
