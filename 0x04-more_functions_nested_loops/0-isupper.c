#include "main.h"
/**
 * _isupper - fuction that checks for uppercase character
 * @s: the number to be checked
 * Return: 1 for uppercase or 0 for any else
 */

int _isupper(int s)
{
	if (s >= 65 && s <= 90)
	{
		return (1);
	}
	return (0);
}
