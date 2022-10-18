#include "main.h"

void print_alphabet_x10(void)
{
	char char;
	int i = 0;

	while (i <= 9)
	{
		for (char = 'a'; char <= 'z'; char++)
		{
			_putchar(char);
		}

		_putchar('\n');

		i++;
	}
}
