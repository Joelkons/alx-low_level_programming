#include "main.h"

/**
 * print_square - prints a square
 * @size: size is the size of the square to be printed
 */

void print_square(int size)
{
	int r, c;

	if (size > 0)
	{
		for (r = 1; r <= size; r++)
		{
			for (c = 1; c <= size; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
