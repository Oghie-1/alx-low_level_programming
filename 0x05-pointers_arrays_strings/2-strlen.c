#include "main.h"

/**
 * _strlen - a function that returns length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
	{
		length++;
	}
	return (length);
}
