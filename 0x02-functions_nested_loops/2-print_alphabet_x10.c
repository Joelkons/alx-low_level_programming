#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char le;
	int c;

	for (c = 0; c <= 9; c++)
	{
		for (le = 'a'; le <= '9'; le++)
		{
			_putchar(le);
		}
		_putchar('\n');
	}
}
