#include "main.h"
/**
 * _isdigit - fuction that checks for a digit
 * @x: The digit to be checked
 * Return: 1 if its a digit return 0 for any else
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
