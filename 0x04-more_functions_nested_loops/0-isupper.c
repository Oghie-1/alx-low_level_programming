#include main.h"
/**
 * _isupper - checks for uppercase character
 *@c: int
 *Return: 1 if upper, 0 other
 */

int _isupper(int c)
{
char alpha;
for (alpha = 'A'; alpha <= 'Z'; alpha++)
{
	if (c == alpha)
		return (1);
}

return (0);
}
