#include "main.h"
/**
 * _print_rev_recursion - Prints a function of string in reverse
 * @s: a reverse string
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
