#include "main.h"

void print_alphabet_x10(void)
{
	char char = 'a';
	int i = 0;

	while (i <= 9)
	{
		for (char; char <= 'z'; char++)
		{
			_putchar(char);
		}

		_putchar('\n');

		i++;
	}
}
