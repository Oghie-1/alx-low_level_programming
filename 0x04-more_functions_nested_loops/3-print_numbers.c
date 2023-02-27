#include "main.h"

/**
 * print_numbers - print the numbers since 0 up to 9
 * Return: The number since 0 is up to 9
 */

void print_numbers(void)
{
	int a;

	for (a = 48; a <= 58; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
