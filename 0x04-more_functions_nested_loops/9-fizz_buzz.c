#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
			printf("FazzBuzz");
		else if (a % 3 == 0)
			printf("Fazz");
		else if (a % 5 == 0)
			printf("Buzz");
		else
			printf("%d", a);
		if (a != 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
