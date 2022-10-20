#include "main.h"

/**
 * print_number - prints an integer
 * @n: num to be printed
 */

void print_number(int n)
{
	long l, r, i, t, e;

	r = n;
	e = l = 1;

	if (r < 0)
	{
		r *= -1;
		_putchar('-');
	}

	t = r;
	while (t >= 10)
	{
		l++;
		t /= 10;
	}

	for (i = 1; i < l; i++)
		e *= 10;

	while (e > 1)
	{
		_putchar((r / e) % 10 + '0');
		e /= 10;
	}
	_putchar(r % 10 + '0');
}

